/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:34:37 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/06 12:58:38 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(unsigned int num, char *base, int fd)
{
	size_t len_base;

	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_putnbr_base_fd(num / len_base, base, fd);
	ft_putchar_fd(base[num % len_base] , fd);
}

#include <stdio.h>
int main()
{
	ft_putnbr_base_fd(123, "01234567", 1);
	printf("\n");
}