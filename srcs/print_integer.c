/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 23:21:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/16 11:09:39 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_n(int num, t_option *fl, int digits, char *base);
void	print_n_cuted(int num, t_option *fl, int digits, char *base);
int		count_digits(unsigned int num, int base, t_option *fl);
void	print_dxX(char c, va_list ap, t_option *fl);

void	print_integer(char c, va_list ap, t_option *fl)
{
	int				num;

	if (c == 'i' || c == 'd')
	{
		num = va_arg(ap, int);
		if (num < 0)
		{
			fl->num_n = 1;
			fl->flag_plus = 0;
			num *= -1;
			if (fl->precision > 0)
				fl->precision += 1;
		}
		if (!fl->precision && fl->dot)
			fl->flag_zero = 0;
		if (fl->flag_space && !fl->num_n && num >= 0 && !fl->flag_plus)
			ft_putchar_fd(' ', 1);
		print_n(num, fl, count_digits(num, 10, fl), B_DEC);
	}
	else
		print_dxX(c, ap, fl);
}

void	print_dxX(char c, va_list ap, t_option *fl)
{
	unsigned int	num;

	if (!fl->precision && fl->dot)
		fl->flag_zero = 0;
	num = va_arg(ap, unsigned int);
	if (c == 'u')
		print_n(num, fl, count_digits(num, 10, fl), B_DEC);
	else if (c == 'x')
		print_n(num, fl, count_digits(num, 16, fl), B_HEXA_LO);
	else
		print_n(num, fl, count_digits(num, 16, fl), B_HEXA_UP);
}

void	print_n(int num, t_option *fl, int digits, char *base)
{
	if (fl->num_n || fl->flag_plus)
		fl->flag_space = 0;
	if (num == 0)
		fl->flag_hash = 0;
	if (fl->dot && !fl->precision && !num)
		digits = 0;
	if (fl->precision > digits)
		fl->zero = (fl->precision - digits);
	else
	{
		if (fl->width > digits && fl->flag_zero)
			fl->zero = ((fl->width - digits) - fl->flag_space) - fl->flag_hash - fl->flag_plus;
		if (fl->zero < 0)
			fl->zero = 0;
	}
	if (fl->zero > 0)
		digits += fl->zero;
	if (fl->width > digits && !fl->flag_zero)
		fl->space = ((fl->width - digits) - fl->flag_space) - fl->flag_hash  - fl->flag_plus;
	if (fl->space < 0)
		fl->space = 0;
	fl->count += digits + fl->space;
	fl->count += fl->flag_hash + fl->flag_space;
	print_n_cuted(num, fl, digits, base);
}

void	print_n_cuted(int num, t_option *fl, int digits, char *base)
{

	if (!fl->flag_minus)
		while (fl->space-- > 0)
			ft_putchar_fd(' ', 1);
	if (fl->flag_hash && ft_strncmp(base, B_HEXA_UP, 16) == 0)
		ft_putstr_fd("0X", 1);
	else if (fl->flag_hash && ft_strncmp(base, B_HEXA_LO, 16) == 0)
		ft_putstr_fd("0x", 1);
	if (fl->flag_plus && !fl->num_n && ft_strncmp(base, B_DEC, 10) == 0)
	{
		ft_putchar_fd('+', 1);
		fl->count += 1;
	}
	if (fl->num_n == 1)
		ft_putchar_fd('-', 1);
	while (fl->zero-- > 0)
		ft_putchar_fd('0', 1);
	if (digits)
		ft_putnbr_base_fd(num, base, 1);
	if (fl->flag_minus)
		while (fl->space-- > 0)
			ft_putchar_fd(' ', 1);
}

int	count_digits(unsigned int num, int base, t_option *fl)
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
	count += fl->num_n;
	return (count);
}
