/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:30:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/07 21:03:01 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf.h"

int	main(void)
{
    printf("\n");
	int tes = 12;
    printf("\n");
	//printf("|%025s|", "BOM DIA");
	printf("ORIGINALLLL\n\n");
	printf("\n");
	printf("\n");
	printf("retorno: %d", printf(" |%+ i| ", 42));
	printf("\n");
	printf("retorno: %d", ft_printf(" |%+ i| ", 42));
	printf("\n");

	printf("\n");
	printf("\n");

	ft_printf("MY\n\n");
	ft_printf("\n");
	ft_printf("\n");
	ft_printf("\n");
	printf("\n");
	//ft_printf("|%i|", f[0]);
	printf("\n");
}
