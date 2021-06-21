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

int	print_string(va_list ap, t_option *option)
{
	char	*str;
	int		len;
	int		space;
	int		zero;

	str = va_arg(ap, char *);
	len = ft_strlen(str);
	if (option->width > len && !option->flag_zero)
		space = option->width - len;
	else 
		space = 0;
	if (option->width > len && option->flag_zero)
		zero = option->width - len;
	else 
		zero = 0;
	if (!option->flag_minus)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
	if (option->flag_zero)
		while (zero-- > 0)
			ft_putchar_fd('0', 1);
	while (len--)
		ft_putchar_fd(*str++, 1);
	if (option->flag_minus)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
	return (ft_strlen(str));
}