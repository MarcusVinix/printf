/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:14:24 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/30 21:13:25 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_base_long_fd(unsigned long int num, char *base, int fd)
{
	size_t len_base;

	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_putnbr_base_long_fd(num / len_base, base, fd);
	ft_putchar_fd(base[num % len_base] , fd);
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

void	print_ptr(va_list ap, t_option *option)
{
	unsigned long int	number;
	int					digits;

	number = va_arg(ap, unsigned long int);	
	digits = count_digits(number, 16, option);
	if (option->precision > digits)
		option->precision = option->precision - digits;
	else
		option->precision = 0;
	if (!number && option->dot && !option->precision)
		digits = 2;
	else
		digits += 2;
	if (option->width > digits)
		option->space = option->width - digits;
	option->count += option->space + digits + option->precision;
	if (!option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
	ft_putstr_fd("0x", 1);
	while(option->precision-- > 0)
		ft_putchar_fd('0', 1);
	if (digits > 2)
		ft_putnbr_base_long_fd(number, B_HEXA_x, 1);
	if (option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
}
