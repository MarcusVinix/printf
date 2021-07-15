/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 22:11:40 by mavinici          #+#    #+#             */
/*   Updated: 2021/07/14 22:31:01 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{

	printf("\n");
	int original = printf("%#012x", -1);
	printf("\n");
	printf("\n");
	int my = ft_printf("%#012x", -1);
	printf("\n");
	printf("\n");
	printf("retorno orignial: %d", original);
	printf("\n");
	printf("\n");
	printf("My retorno: %d", my);
	printf("\n");
	printf("\n");
}