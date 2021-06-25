/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:44:13 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/25 18:14:36 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_char(va_list ap, t_option *option)
{
	char	c;
	int		space;

	c = va_arg(ap, int);
	if (option->width > 1)
		space = option->width - 1;
	else
		space = 0;
	option->count += space + 1;
	if (!option->flag_minus)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
	ft_putchar_fd(c, 1);
	if (option->flag_minus)
		while (space-- > 0)
			ft_putchar_fd(' ', 1);
}
