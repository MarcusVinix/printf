/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_porcent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:28:42 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/16 13:50:01 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_porcent(t_option *option)
{
	if (option->wd > 1 && option->fl_zero_p)
		option->zero = option->wd - 1;
	else
		option->zero = 0;
	if (option->wd > 1 && !option->zero)
		option->space = option->wd - 1;
	else
		option->space = 0;
	option->count += option->zero + option->space + 1;
	if (!option->fl_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
	if (option->fl_zero_p)
		while (option->zero-- > 0)
			ft_putchar_fd('0', 1);
	ft_putchar_fd('%', 1);
	if (option->fl_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
}
