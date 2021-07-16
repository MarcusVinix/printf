/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:14:24 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/16 13:50:17 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_putnbr_base_long_fd(unsigned long int num, char *base, int fd);
static int	ptr_options(unsigned long int number, t_option *option, int digits);
static int	count_digits(unsigned long int num, int base, t_option *option);

void	print_ptr(va_list ap, t_option *option)
{
	unsigned long int	number;
	int					digits;

	number = va_arg(ap, unsigned long int);
	digits = ptr_options(number, option, count_digits(number, 16, option));
	if (!option->fl_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
	ft_putstr_fd("0x", 1);
	while (option->precision-- > 0)
		ft_putchar_fd('0', 1);
	if (digits > 2)
		ft_putnbr_base_long_fd(number, B_HEXA_LO, 1);
	if (option->fl_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
}

static int	ptr_options(unsigned long int number, t_option *option, int digits)
{
	if (option->precision > digits)
		option->precision = option->precision - digits;
	else
		option->precision = 0;
	if (!number && option->dot && !option->precision)
		digits = 2;
	else
		digits += 2;
	if (option->wd > digits)
		option->space = option->wd - digits;
	option->count += option->space + digits + option->precision;
	return (digits);
}

static void	ft_putnbr_base_long_fd(unsigned long int num, char *base, int fd)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_putnbr_base_long_fd(num / len_base, base, fd);
	ft_putchar_fd(base[num % len_base], fd);
}

static int	count_digits(unsigned long int num, int base, t_option *option)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num >= 1)
	{
		num /= base;
		count++;
	}
	count += option->num_n;
	return (count);
}
