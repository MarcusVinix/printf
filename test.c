/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:30:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/07 13:25:48 by mavinici         ###   ########.fr       */
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
	int tes = 12;
    printf("\n");
	//printf("|%025s|", "BOM DIA");
	printf("ORIGINALLLL\n\n");
	printf("\n");
	printf("\n");
	printf("retorno: %d", printf(" |%n| ", &tes));
	printf("\n");
	printf("retorno: %d", tes);
	printf("\n");
	printf("\n");
	printf("retorno: %d", ft_printf(" |%n| ", &tes));
	printf("\n");
	printf("retorno: %d", tes);
	printf("\n");
	printf("\n");

	ft_printf("MY\n\n");
	ft_printf("\n");
	ft_printf("\n");
	ft_printf("\n");
	printf("\n");
	//double f = 12.12;
	//printf("|%f|\n", f);
	//printf("%-35s:|%20f|\n", "width 20", f);
	//printf("%-35s:|%020.6f|\n", "flag 0, width 20, precision 6", f);
	//printf("%-35s:|%020.36f|\n", "flag 0, width 20, precision 36", f);
	//printf("%-35s:|%-20.6f|\n", "width 20, precision 6", f);
	//printf("%-35s:|%-20.f|\n", "flag -, width 20, precision ", f);
	//printf("%-35s:|%-20.0f|\n", "flag -, width 20, precision 0", f);
	//ft_printf("my |%i|\n", 123);
	//ft_printf("%.p", NULL);
	//printf("|%i|", n[0]);

	printf("\n");
	//ft_printf("|%i|", f[0]);
	printf("\n");
}


//ategory: #
//ubcategory: x
//.KO 2.KO 3.KO 4.KO 5.KO 6.KO 7.KO 8.KO 9.OK 10.KO 11.KO 12.KO 13.KO 14.KO 15.KO 16.KO 
//ubcategory: X
//7.KO 18.KO 19.KO 20.KO 21.KO 22.KO 23.KO 24.KO 25.OK 26.KO 27.KO 28.KO 29.KO 30.KO 31.KO 32.KO 
//ubcategory: e
//3.KO 34.KO 35.KO 36.KO 37.KO 38.KO 39.KO 40.KO 41.KO 42.KO 43.KO 44.KO 45.KO 46.KO 47.KO 48.KO 
//ubcategory: f
//9.KO 50.KO 51.KO 52.KO 53.KO 54.KO 55.KO 56.KO 57.KO 58.KO 59.KO 60.KO 61.KO 62.KO 63.KO 64.KO 
//ubcategory: g
//5.KO 66.KO 67.KO 68.KO 69.KO 70.KO 71.KO 72.KO 73.KO 74.KO 75.KO 76.KO 77.KO 78.KO 79.KO 80.KO 
//ategory: ' '
//ubcategory: d
//.KO 2.KO 3.KO 4.KO 5.KO 6.KO 7.KO 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 18.OK 19.OK 20.OK 21.KO 22.KO
//23.KO 
//ubcategory: i
//4.KO 25.KO 26.KO 27.KO 28.KO 29.KO 30.KO 31.OK 32.OK 33.OK 34.OK 35.OK 36.OK 37.OK 38.OK 39.OK 40.OK 41.OK 42.OK 43.OK 44
//KO 45.KO 46.KO 