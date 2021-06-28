/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:46:31 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/28 15:18:08 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digits(unsigned int number)
{
	int	count;

	count = 0;
	if (number == 0)
		return (1);
	while (number >= 1)
	{
		number /= 10;
		count++;
	}
	return (count);
}
