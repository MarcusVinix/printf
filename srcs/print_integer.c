/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 23:21:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/10 15:13:20 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_number(int num, t_option *option, int digits, char *base);
void	print_number_cuted(int num, t_option *option, int digits, char *base);
int		count_digits(unsigned int num, int base, t_option *option);

void	print_integer(char c, va_list ap, t_option *option)
{
	intmax_t				num;
	uintmax_t				unum;

	if (c == 'i' || c == 'd')
	{
		if (option->flag_h)
			num = (intmax_t)((short)va_arg(ap, int));
		else
			num = (intmax_t)va_arg(ap, int);
		if (num < 0)
		{
			option->num_n = 1;
			option->flag_plus = 0;
			num *= -1;
			if (option->precision > 0)
				option->precision += 1;
		}
		if (option->flag_space && !option->num_n && num >= 0 && !option->flag_plus)
			ft_putchar_fd(' ', 1);
		print_number(num, option, count_digits(num, 10, option), B_DEC);
	}
	else
	{
		if (option->flag_h)
			unum = (uintmax_t)((unsigned short)va_arg(ap, unsigned int));
		else
			unum = (uintmax_t)va_arg(ap, unsigned int);
		if (c == 'u')
			print_number(unum, option, count_digits(unum, 10, option), B_DEC);
		else if (c == 'x')
			print_number(unum, option, count_digits(unum, 16, option), B_HEXA_LO);
		else
			print_number(unum, option, count_digits(unum, 16, option), B_HEXA_UP);
	}
}

void	print_number(int num, t_option *option, int digits, char *base)
{
	if (option->num_n || option->flag_plus)
		option->flag_space = 0;
	if (num == 0)
		option->flag_hashtag = 0;
	if (option->dot && !option->precision && !num)
		digits = 0;
	if (option->precision > digits)
		option->zero = (option->precision - digits);
	else
	{
		if (option->width > digits && option->flag_zero)
			option->zero = ((option->width - digits) - option->flag_space) - option->flag_hashtag;
		if (option->zero < 0)
			option->zero = 0;
	}
	if (option->zero > 0)
		digits += option->zero;
	if (option->width > digits && !option->flag_zero)
		option->space = ((option->width - digits) - option->flag_space) - option->flag_hashtag;
	if (option->space < 0)
		option->space = 0;
	option->count += digits + option->space;
	option->count += option->flag_hashtag + option->flag_space;
	print_number_cuted(num, option, digits, base);
}

void	print_number_cuted(int num, t_option *option, int digits, char *base)
{
	if (option->precision >= option->width && option->flag_plus)
		option->count += 1;
	option->space -= option->flag_plus;
	if (!option->precision && option->flag_plus)
		option->zero -= option->flag_plus;
	if (option->flag_hashtag && ft_strncmp(base, B_HEXA_UP, 16) == 0 && num > 0)
		ft_putstr_fd("0X", 1);
	else if (option->flag_hashtag && ft_strncmp(base, B_HEXA_LO, 16) == 0 && num > 0)
		ft_putstr_fd("0x", 1);
	if (!option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
	if (option->flag_plus && !option->num_n && ft_strncmp(base, B_DEC, 10) == 0)
		ft_putchar_fd('+', 1);
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

int	count_digits(unsigned int num, int base, t_option *option)
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
