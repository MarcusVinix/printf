/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 23:21:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/16 13:48:49 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_n(int num, t_option *op, int digits, char *base);
void	print_n_cuted(int num, t_option *op, int digits, char *base);
int		count_digits(unsigned int num, int base, t_option *op);
void	print_dxX(char c, va_list ap, t_option *op);

void	print_integer(char c, va_list ap, t_option *op)
{
	int				num;

	if (c == 'i' || c == 'd')
	{
		num = va_arg(ap, int);
		if (num < 0)
		{
			op->num_n = 1;
			op->fl_plus = 0;
			num *= -1;
			if (op->precision > 0)
				op->precision += 1;
		}
		if (!op->precision && op->dot)
			op->fl_zero = 0;
		if (op->fl_sp && !op->num_n && num >= 0 && !op->fl_plus)
			ft_putchar_fd(' ', 1);
		print_n(num, op, count_digits(num, 10, op), B_DEC);
	}
	else
		print_dxX(c, ap, op);
}

void	print_dxX(char c, va_list ap, t_option *op)
{
	unsigned int	num;

	if (!op->precision && op->dot)
		op->fl_zero = 0;
	num = va_arg(ap, unsigned int);
	if (c == 'u')
		print_n(num, op, count_digits(num, 10, op), B_DEC);
	else if (c == 'x')
		print_n(num, op, count_digits(num, 16, op), B_HEXA_LO);
	else
		print_n(num, op, count_digits(num, 16, op), B_HEXA_UP);
}

void	print_n(int num, t_option *op, int len, char *base)
{
	if (op->num_n || op->fl_plus)
		op->fl_sp = 0;
	if (num == 0)
		op->fl_hash = 0;
	if (op->dot && !op->precision && !num)
		len = 0;
	if (op->precision > len)
		op->zero = (op->precision - len);
	else
	{
		if (op->wd > len && op->fl_zero)
			op->zero = (op->wd - len) - op->fl_sp - op->fl_hash - op->fl_plus;
		if (op->zero < 0)
			op->zero = 0;
	}
	if (op->zero > 0)
		len += op->zero;
	if (op->wd > len && !op->fl_zero)
		op->space = (op->wd - len) - op->fl_sp - op->fl_hash - op->fl_plus;
	if (op->space < 0)
		op->space = 0;
	op->count += len + op->space;
	op->count += op->fl_hash + op->fl_sp;
	print_n_cuted(num, op, len, base);
}

void	print_n_cuted(int num, t_option *op, int len, char *base)
{
	if (!op->fl_minus)
		while (op->space-- > 0)
			ft_putchar_fd(' ', 1);
	if (op->fl_hash && ft_strncmp(base, B_HEXA_UP, 16) == 0)
		ft_putstr_fd("0X", 1);
	else if (op->fl_hash && ft_strncmp(base, B_HEXA_LO, 16) == 0)
		ft_putstr_fd("0x", 1);
	if (op->fl_plus && !op->num_n && ft_strncmp(base, B_DEC, 10) == 0)
	{
		ft_putchar_fd('+', 1);
		op->count += 1;
	}
	if (op->num_n == 1)
		ft_putchar_fd('-', 1);
	while (op->zero-- > 0)
		ft_putchar_fd('0', 1);
	if (len)
		ft_putnbr_base_fd(num, base, 1);
	if (op->fl_minus)
		while (op->space-- > 0)
			ft_putchar_fd(' ', 1);
}

int	count_digits(unsigned int num, int base, t_option *op)
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
	count += op->num_n;
	return (count);
}
