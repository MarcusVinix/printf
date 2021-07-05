/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:30:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/05 19:38:09 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf.h"

int	main(void)
{
//    printf(" 0*|%0-*.*d|*0 0*|%0*.*d|*0 \n", 6, 2, 102, 10, 21, -101);
//	ft_printf("\n");
//	ft_printf("\n");
//	ft_printf(" 0*|%0-*.*d|*0 0*|%0*.*d¦*0 \n", 6, 2, 102, 10, 21, -101);
//    ft_printf("\n");
//    ft_printf("\n");
//    printf(" 0*|%0-*.*d|*0 0*|%0*.*d|*0 \n", 2, 6, 102, 21, 10, -101);
//    ft_printf("\n");
//    ft_printf("\n");
//    ft_printf(" 0*|%0-*.*d|*0 0*|%0*.*d|*0 \n", 2, 6, 102, 21, 10, -101);
//
//    ft_printf("\n");
//    ft_printf("\n");
//
//    ft_printf("|%0*.*d|\n", 21, 10, -101);

//    
//    
//    char *b = "TES";
//    long a = 125664;
//    long *d = &a;
//    char *f = "AR";
//    char *z = "ASR";
//  
//    ft_printf("\n");
//    ft_printf("\n");
//    printf("%-40s: |%p|", "Testando ponteiro", z);
//    printf("\n");
//    printf("\n");
//    printf("%-40s: |%20p|", "Testando ponteiro", b);
//    printf("\n");
//    printf("\n");
//    printf("%-40s: |%-20p|", "Testando ponteiro", f);
//    printf("\n");
//    printf("\n");
//    printf("%-40s: |%5p|", "Testando ponteiro", d);
//    printf("\n");
//    printf("\n");
//    ft_putnbr_base_long_fd((unsigned long int)z, B_HEXA_x, 1);
//    printf("\n");
//    printf("\n");
//    ft_putnbr_base_long_fd((unsigned long int)b, B_HEXA_x, 1);
//    printf("\n");
//    printf("\n");
//    ft_putnbr_base_long_fd((unsigned long int)f, B_HEXA_x, 1);
//    printf("\n");
//    printf("\n");
//    ft_putnbr_base_long_fd((unsigned long int)d, B_HEXA_x, 1);
    printf("\n");
    printf("\n");
	//printf("|%025s|", "BOM DIA");
	printf("\n");
	printf("\n");

	double f = 12.12;
	printf("|%f|\n", f);
	printf("%-35s:|%20f|\n", "width 20", f);
	printf("%-35s:|%020.6f|\n", "flag 0, width 20, precision 6", f);
	printf("%-35s:|%020.36f|\n", "flag 0, width 20, precision 36", f);
	printf("%-35s:|%-20.6f|\n", "width 20, precision 6", f);
	printf("%-35s:|%-20.f|\n", "flag -, width 20, precision ", f);
	printf("%-35s:|%-20.0f|\n", "flag -, width 20, precision 0", f);
	//ft_printf("my |%i|\n", 123);
	//ft_printf("%.p", NULL);
	//printf("|%i|", n[0]);
	printf("\n");
	//ft_printf("|%i|", f[0]);
	printf("\n");
}
