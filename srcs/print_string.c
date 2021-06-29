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

void	print_string(va_list ap, t_option *option)
{
	char	*str;
	int		len;
	int		space;

	str = va_arg(ap, char *);
	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	space = 0;
	if (option->precision > 0 && option->precision < len)
		len = option->precision;
	else if (option->dot && !option->precision)
		len = 0;
	if (option->width > len && option->flag_zero)
		option->zero = option->width - len;
	else
		option->zero = 0;
	if (option->width > len && !option->zero)
		option->space = option->width - len;
	option->count += len + option->space + option->zero;
	if (!option->flag_minus)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
	if (option->flag_zero)
		ft_putchar_fd('0', 1);
	while (len--)
		ft_putchar_fd(*str++, 1);
	if (option->flag_minus)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
}
