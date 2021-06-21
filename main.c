/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:48:45 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/17 16:48:45 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


int main(void)
{	

	ft_putendl_fd("Testes String:", 1);
	ft_putendl_fd("teste width", 1);
	ft_printf("%20sa %5s\n", "TESTANDOFT", "HI");
	printf("%20sa %5s\n", "TESTANDOPF", "HI");
	ft_printf("%10sb\n", "TESTE2FT");
	printf("%10sb\n", "TESTE2PF");
	ft_printf("%---10sc\n", "teste3-ft");
	printf("%---10sc\n", "teste3-pf");
	ft_printf("%55sd\n", "teste4ft");
	printf("%55sd\n", "teste4pf");
	ft_putendl_fd("Fim dos testes da String.", 1);


}