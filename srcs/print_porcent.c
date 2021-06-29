/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_porcent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:28:42 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/28 21:45:07 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

void	print_porcent(t_option *option)
{	
	printf("valor %d\n", option->flag_zero_p);
	if (option->width > 1 && option->flag_zero_p)
		option->zero = option->width - 1;
	else
		option->zero = 0;
	if (option->width > 1 && !option->zero)
		option->space = option->width - 1;
	else
		option->space = 0;
	option->count += option->zero + option->space + 1;
		printf("valor %d\n", option->zero);
	if (!option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
	if (option->flag_zero_p)
		while (option->zero-- > 0)
			ft_putchar_fd('0', 1);
	ft_putchar_fd('%', 1);
	if (option->flag_minus)
		while (option->space-- > 0)
			ft_putchar_fd(' ', 1);
}
