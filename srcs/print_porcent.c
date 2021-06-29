/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_porcent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:28:42 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/28 21:50:46 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

void	print_porcent(t_option *option)
{
	if (option->width > 1 && option->flag_zero)
		option->zero = option->width - 1;
	else
		option->zero = 0;
	if (option->width > 1 && !option->zero)
		option->space = option->width - 1;
	else
		option->space = 0;
	option->count += option->zero + option->space + 1;
	if (!option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
	if (option->flag_zero)
		while (option->zero-- > 0)
			ft_putchar_fd('0', 1);
	ft_putchar_fd('%', 1);
	if (option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
}
