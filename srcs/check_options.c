/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_options.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 15:14:44 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/19 15:14:44 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	get_number(const char *format, t_option *option)
{
	int	number;

	number = 0;
	while (ft_isdigit(format[option->index]))
	{
		number = number * 10 + (format[option->index] - '0');
		option->index++;
	}
	return (number);
}

static void	set_fls_zero_minus(const char *format, t_option *option)
{
	while (format[option->index] == '-' || format[option->index] == '0'
		|| format[option->index] == ' ' || format[option->index] == '#'
		|| format[option->index] == '+')
	{
		if (format[option->index] == '-')
		{
			option->fl_minus = 1;
			option->fl_zero = 0;
			option->fl_zero_p = 0;
		}
		else if (format[option->index] == '0' && option->fl_minus == 0)
		{
			option->fl_zero = 1;
			option->fl_zero_p = 1;
		}
		if (format[option->index] == ' ')
			option->fl_sp = 1;
		if (format[option->index] == '#')
			option->fl_hash = 2;
		if (format[option->index] == '+')
			option->fl_plus = 1;
		option->index++;
	}
}

static void	set_wd(const char *format, va_list ap, t_option *option)
{
	if (format[option->index] == '*')
	{
		option->wd = va_arg(ap, int);
		if (option->wd < 0)
		{
			option->fl_minus = 1;
			option->fl_zero = 0;
			option->fl_zero_p = 0;
			option->wd *= -1;
		}
		option->index++;
	}
	else
		option->wd = get_number(format, option);
}

static void	set_precision(const char *format, va_list ap, t_option *option)
{
	option->dot = 1;
	option->index++;
	if (format[option->index] == '*')
	{
		option->precision = va_arg(ap, int);
		if (option->precision >= 0)
			option->fl_zero = 0;
		option->index++;
	}
	else
	{
		if (ft_isdigit(format[option->index]))
			option->fl_zero = 0;
		option->precision = get_number(format, option);
	}
}

void	check_options(const char *format, va_list ap, t_option *option)
{
	if (format[option->index] == '-' || format[option->index] == '0'
		|| format[option->index] == ' ' || format[option->index] == '#'
		|| format[option->index] == '+')
		set_fls_zero_minus(format, option);
	set_wd(format, ap, option);
	if (format[option->index] == '.')
		set_precision(format, ap, option);
}
