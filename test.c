/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:30:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/12 12:43:24 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf.h"

int	main(void)
{
    printf("\n");
	int tes = 12;
	int *n = &tes;
    printf("\n");
	//printf("|%025s|", "BOM DIA");
	printf("ORIGINALLLL\n\n");
	printf("\n");
	printf("\n");
	printf("retorno: %d", printf(" |%n| ", n));
	printf("\n");
	printf("%p", n);
	printf("\n");
//	printf("retorno: %d", ft_printf(" |%n| ", n));

	printf("\n");
	printf("\n");
//
	//ft_printf("MY\n\n");
	//ft_printf("00000000000000000000");
	//ft_printf("\n");
	//ft_printf("|%07.3s %-7.3s|", "1234", "45678");
	//printf("\n");
	////ft_printf("|%i|", f[0]);
	//ft_printf("%021.10d", INT_MIN);
	printf("\n");
}



