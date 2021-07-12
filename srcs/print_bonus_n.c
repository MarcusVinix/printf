/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bonus_n.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:56:59 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/10 14:00:07 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_bonus_n(va_list ap, t_option *option)
{
	intmax_t	*n;

	if (option->flag_h)
		n = (intmax_t *)((short *)va_arg(ap, int *));
	else
		n = (intmax_t *)va_arg(ap, int *);
	if (!n)
		return ;
	*n = option->count;
}
