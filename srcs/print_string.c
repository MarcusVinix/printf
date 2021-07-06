/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 20:29:27 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/18 20:29:27 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	string_options(int len, t_option *option)
{
	if (option->precision > 0 && option->precision < len)
		len = option->precision;
	else if (option->dot && !option->precision)
		len = 0;
	if (option->width > len && option->flag_zero)
		option->zero = option->width - len;
	if (option->width > len && !option->zero)
		option->space = option->width - len;
	option->count += len + option->space + option->zero;
	return (len);
}

void	print_string(va_list ap, t_option *option)
{
	char	*str;
	int		len;

	str = va_arg(ap, char *);
	if (!str)
		str = "(null)";
	len = string_options(ft_strlen(str), option);
	if (!option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
	if (option->flag_zero)
		while (option->zero-- > 0)
			ft_putchar_fd('0', 1);
	while (len--)
		ft_putchar_fd(*str++, 1);
	if (option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
}
