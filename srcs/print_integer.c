/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 23:21:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/06 21:11:04 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_number_cuted(int num, t_option *option, int digits, char *base)
{
	if (option->flag_hashtag && ft_strncmp(base, B_HEXA_X, 16) == 0 && num > 0)
		ft_putstr_fd("0X", 1);
	else if (option->flag_hashtag && ft_strncmp(base, B_HEXA_x, 16) == 0 && num > 0)
		ft_putstr_fd("0x", 1);
	if (!option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
	if (option->num_n == 1)
		ft_putchar_fd('-', 1);
	while (option->zero-- > 0)
		ft_putchar_fd('0', 1);
	if (digits)
		ft_putnbr_base_fd(num, base, 1);
	if (option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
}

void	print_number(int num, t_option *option, int digits, char *base)
{
	if (num <= 0)
		option->flag_space = 0;
	if (option->dot && !option->precision && !num)
		digits = 0;
	if (option->precision > digits)
		option->zero = (option->precision - digits) - option->flag_space;
	else
	{
		if (option->width > digits && option->flag_zero)
			option->zero = (option->width - digits) - option->flag_space;
		else
			option->zero = 0;
	}
	if (option->zero > 0)
		digits += option->zero;
	if (option->width > digits && !option->flag_zero)
		option->space = (option->width - digits) - option->flag_space;
	else
		option->space = 0;
	option->count += digits + option->space + option->flag_hashtag + option->flag_space;
	
	print_number_cuted(num, option, digits, base);
}

static int	count_digits(unsigned int num, int base, t_option *option)
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

void	print_integer(char c, va_list ap, t_option *option)
{
	int				num;

	if (c == 'i' || c == 'd')
	{
		num = va_arg(ap, int);
		if (num < 0)
		{
			option->num_n = 1;
			num *= -1;
			if (option->precision > 0)
				option->precision += 1;
		}
		if (option->flag_space && !option->num_n && num >= 0)
			ft_putchar_fd(' ', 1);
		print_number(num, option, count_digits(num, 10, option), B_DEC);
	}
	else
	{
		num = va_arg(ap, unsigned int);
		if (c == 'u')
			print_number(num, option, count_digits(num, 10, option), B_DEC);
		else if (c == 'x')
			print_number(num, option, count_digits(num, 16, option), B_HEXA_x);
		else
			print_number(num, option, count_digits(num, 16, option), B_HEXA_X);
	}
}
