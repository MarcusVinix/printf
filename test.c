/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:30:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/29 18:13:18 by mavinici         ###   ########.fr       */
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
	printf("|%025s|", "BOM DIA");
	printf("\n");
	printf("\n");
	ft_printf("|%025s|", "BOM DIA");
	//ft_printf("%.p", NULL);
    printf("\n");
	printf("\n");

}



// [OUTPUT] ft_printf("%-70.193x%-140c%168c%026.51%%0125.119X" ,1102840003u,-50,-17,3721437512u)
// [OUTPUT] ft_printf("%10c%0036.99%" ,9)
// [OUTPUT] ft_printf("%-132.186x%00129.46%%-191.181X%-75.123d%0033.123u" ,2222238685u,3146675666u,251185067,3453417465u)
// [OUTPUT] ft_printf("%--198.101X%0145.12%%172c" ,935976394u,-118)
// [OUTPUT] ft_printf("%--81.*%%019.14%%---27c%-75.150d%00136.74x" ,70,-15,-128722927,4090510000u)
// [OUTPUT] ft_printf("%52c%00040.166%%-131c%-12.99s" ,-57,123,"k\r/ULCoKi0")
// [OUTPUT] ft_printf("%043.165%%--35.34s%--4.*d%-189.*i" ,"TSvqw0m:$c!hhK(,R*",-100,967600936,45,1272776825)
// [OUTPUT] ft_printf("%.p", NULL)
// [OUTPUT] ft_printf("%.p", NULL)
// [OUTPUT] ft_printf("%1.p", NULL)
// [OUTPUT] ft_printf("%1.p", NULL)
// [OUTPUT] ft_printf("%5.p", NULL)
// [OUTPUT] ft_printf("%5.p", NULL)
// [OUTPUT] ft_printf("-->|%-16.p|<-- ", NULL)
// [OUTPUT] ft_printf("-->|%-16.p|<-- ", NULL)


//- [OUTPUT] ft_printf("%-70.193x%-140c%168c%026.51%%0125.119X" ,1102840003u,-50,-17,3721437512u)
//- [OUTPUT] ft_printf("%10c%0036.99%" ,9)
//- [OUTPUT] ft_printf("%-132.186x%00129.46%%-191.181X%-75.123d%0033.123u" ,2222238685u,3146675666u,251185067,3453417465u)
//- [OUTPUT] ft_printf("%--198.101X%0145.12%%172c" ,935976394u,-118)
//- [OUTPUT] ft_printf("%--81.*%%019.14%%---27c%-75.150d%00136.74x" ,70,-15,-128722927,4090510000u)
//- [OUTPUT] ft_printf("%52c%00040.166%%-131c%-12.99s" ,-57,123,"k\r/ULCoKi0")
//- [OUTPUT] ft_printf("%043.165%%--35.34s%--4.*d%-189.*i" ,"TSvqw0m:$c!hhK(,R*",-100,967600936,45,1272776825)
//
//
//
//
//
//
//
//
//- [OUTPUT] ft_printf("%.p", NULL)
//- [OUTPUT] ft_printf("%.p", NULL)
//- [OUTPUT] ft_printf("%1.p", NULL)
//- [OUTPUT] ft_printf("%1.p", NULL)
//- [OUTPUT] ft_printf("%5.p", NULL)
//- [OUTPUT] ft_printf("%5.p", NULL)
//- [OUTPUT] ft_printf("-->|%-16.p|<-- ", NULL)
//- [OUTPUT] ft_printf("-->|%-16.p|<-- ", NULL)