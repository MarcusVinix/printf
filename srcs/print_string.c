/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 20:29:27 by mavinici          #+#    #+#             */
/*   Updated: 2021/06/18 20:29:27 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_string(const char *format, va_list ap, t_option *option)
{
	char	*str;
	int	c;
	int		len;

	str = va_arg(ap, char *);
	c = format[option->index];
	len = ft_strlen(str);
	if (ft_isdigit(c))
	{
		if (c > len)
			while (c-- > len)
				ft_putchar_fd(' ', 1);
		option->index++;
	}
	ft_putstr_fd(str, 1);

	return (ft_strlen(str));
}