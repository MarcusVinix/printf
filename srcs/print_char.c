/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:44:13 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/30 18:15:42 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_char(va_list ap, t_option *option)
{
	char	c;

	c = va_arg(ap, int);
	if (option->width > 1 && option->flag_zero)
		option->zero = option->width - 1;
	else
		option->zero = 0;
	if (option->width > 1 && !option->zero)
		option->space = option->width - 1;
	else
		option->space = 0;
	option->count += option->space + option->zero + 1;
	if (!option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
	if (option->flag_zero)
		while (option->zero-- > 0)
			ft_putchar_fd('0', 1);
	ft_putchar_fd(c, 1);
	if (option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
}
