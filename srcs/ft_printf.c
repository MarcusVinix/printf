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
	option->count = 0;
	option->dot = 0;
	option->flag_minus = 0;
	option->flag_pre_va = 0;
	option->flag_zero = 0;
	option->index = 0;
	option->num_m = 0;
	option->precision = 0;
	option->width = 0;
}

static int	check(const char *format, va_list ap, t_option *option)
{
	int	count;

	count = 0;
	check_options(format, ap, option);
	if (format[option->index] == 's')
		count = print_string(ap, option);
	else if (format[option->index] == 'c')
		ft_putchar_fd(va_arg(ap, int), 1);

	option->index++;
	return (count);
}

int	ft_printf(const char * format, ...)
{	
	va_list		ap;
	t_option	option;

	start_options(&option);
	va_start(ap, format);
	while (format[option.index])
	{
		if (format[option.index] == '%')
		{
			option.index++;
			option.count += check(format, ap, &option);
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
