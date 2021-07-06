/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bonus_f.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:52:06 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/05 22:41:35 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_base_double_fd(int num, char *base, int fd)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_putnbr_base_double_fd(num / len_base, base, fd);
	ft_putchar_fd(base[num % len_base], fd);
}



void	print_bonus_f(va_list ap, t_option *option)
{
	float f;

	f = va_arg(ap, double);

	(void) option;
	ft_putnbr_base_double_fd(f, "0123456789", 1);
}