/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:01:06 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/17 16:01:06 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	start_options(t_option *option)
{
	option->dot = 0;
	option->flag_minus = 0;
	option->flag_zero = 0;
	option->num_n = 0;
	option->precision = 0;
	option->width = 0;
	option->space = 0;
	option->zero = 0;
}

static void	check(const char *format, va_list ap, t_option *option)
{
	check_options(format, ap, option);
	if (format[option->index] == 's')
		print_string(ap, option);
	else if (format[option->index] == 'c')
		print_char(ap, option);
	else if (format[option->index] == 'p')
		print_ptr(ap, option);
	else if (format[option->index] == 'i' || format[option->index] == 'd'
		|| format[option->index] == 'u' || format[option->index] == 'x'
		|| format[option->index] == 'X')
		print_integer(format[option->index], ap, option);
	else if (format[option->index] == '%')
		ft_putchar_fd('%', 1);
	option->index++;
	start_options(option);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_option	option;

	option.index = 0;
	option.count = 0;
	start_options(&option);
	va_start(ap, format);
	while (format[option.index])
	{
		if (format[option.index] == '%')
		{
			option.index++;
			check(format, ap, &option);
		}
		else
		{
			ft_putchar_fd(format[option.index], 1);
			option.index++;
			option.count++;
		}
	}
	va_end(ap);
	return (option.count);
}
