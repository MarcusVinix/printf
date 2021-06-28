/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:30:41 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/28 14:07:18 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf.h"

void	ft_putnbr_base_long_fd(unsigned long int num, char *base, int fd)
{
	size_t len_base;

	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_putnbr_base_long_fd(num / len_base, base, fd);
	ft_putchar_fd(base[num % len_base] , fd);
}

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

    
    
    char *b = "TES";
    long a = 125664;
    long *d = &a;
    char *f = "AR";
    char *z = "ASR";
  
    ft_printf("\n");
    ft_printf("\n");
    printf("%-40s: |%p|", "Testando ponteiro", z);
    printf("\n");
    printf("\n");
    printf("%-40s: |%20p|", "Testando ponteiro", b);
    printf("\n");
    printf("\n");
    printf("%-40s: |%-20p|", "Testando ponteiro", f);
    printf("\n");
    printf("\n");
    printf("%-40s: |%5p|", "Testando ponteiro", d);
    printf("\n");
    printf("\n");
    ft_putnbr_base_long_fd((unsigned long int)z, B_HEXA_x, 1);
    printf("\n");
    printf("\n");
    ft_putnbr_base_long_fd((unsigned long int)b, B_HEXA_x, 1);
    printf("\n");
    printf("\n");
    ft_putnbr_base_long_fd((unsigned long int)f, B_HEXA_x, 1);
    printf("\n");
    printf("\n");
    ft_putnbr_base_long_fd((unsigned long int)d, B_HEXA_x, 1);
    printf("\n");
    printf("\n");

}
