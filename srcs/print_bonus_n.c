/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bonus_n.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:56:59 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/12 10:40:41 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_bonus_n(va_list ap, t_option *option)
{
	int	*n;

	if (option->flag_h)
		n = (int *)((short *)va_arg(ap, int *));
	else
		n = va_arg(ap, int *);
	if (!n)
		return ;
	*n = option->count;
}
