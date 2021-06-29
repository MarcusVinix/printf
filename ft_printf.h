#ifndef FT_PRINTF_H
# define	FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include <stdlib.h>

# define B_DEC "0123456789"
# define B_HEXA_x "0123456789abcdef"
# define B_HEXA_X "0123456789ABCDEF"

typedef struct s_option
{
	int space;
	int zero;
	int index;
	int count;
	int flag_minus;
	int flag_zero;
	int width;
	int dot;
	int precision;
	int num_n;
}	t_option;

int		ft_printf(const char * format, ...);
void	print_string(va_list ap, t_option *option);
void	check_options(const char *format, va_list ap, t_option *option);
void	print_char(va_list ap, t_option *option);
void	print_ptr(va_list ap, t_option *option);
void	print_integer(char c, va_list ap, t_option *option);
void	print_porcent(t_option *option);

#endif