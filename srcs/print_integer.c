/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 23:21:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/23 17:59:46 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"



void	print_integer(va_list ap, t_option *option)
{
	int				i;
	unsigned int	number;
	int				digits;
	
	i = va_arg(ap, int);
	number = 0;
	if (i < 0)
	{
		option->num_n = 1;
		number = i * -1;
		if (option->precision > 0)
			option->precision += 1;
	}
	else
		number = i;
	digits = ft_count_digits(number) + option->num_n;
	if (option->dot && !option->precision && !i)
		digits = 0;
	if (option->precision > digits)
		option->zero = option->precision - digits;
	else 
	{
		if (option->width > digits && option->flag_zero)
			option->zero = option->width - digits;
		else
			option->zero = 0;
	}
	if (option->zero > 0)
		digits += option->zero;
	if (option->width > digits && !option->flag_zero)
		option->space = option->width - digits;
	else
		option->space = 0;
	option->count += digits + option->space;
	if (!option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
	if (option->num_n == 1)
		ft_putchar_fd('-', 1);
	while (option->zero-- > 0)
		ft_putchar_fd('0', 1);
	if (digits)
		ft_putnbr_fd(number, 1);
	if (option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
}


//	if (option->dot && !option->precision)
//		digits = 0;
//	if (option->precision > digits)
//		option->zero = option->precision - digits;
//	else
//	{
//		if (option->width > digits && option->zero)
//			option->zero = option->width - digits;
//		else
//			option->zero = 0;
//	}
//	if (option->width > digits && !option->flag_zero)
//		option->space = option->width - digits;
//	else
//		option->space = 0;
//	if (!option->flag_minus)
//		while (option->space-- > 0)
//			ft_putchar_fd(' ', 1);
//	if (option->num_n == 1)
//		ft_putchar_fd('-', 1);
//	if (option->zero)
//		while (option->zero-- > 0)
//			ft_putchar_fd('0', 1);