#ifndef FT_PRINTF_H
# define	FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include <stdlib.h>

typedef struct s_option
{
	int space;
	int zero;
	int index;
	int count;
	int flag_minus;
	int flag_zero;
	int width;
	int dot;	     // to know if there is precision
	int precision;   // initially set as -1 instead of 0
	int flag_pre_va; // if precision is a variable argument
	int num_n;	     // is number negative?
}	t_option;

int		ft_printf(const char * format, ...);
void	print_string(va_list ap, t_option *option);
void	check_options(const char *format, va_list ap, t_option *option);
void	print_char(va_list ap, t_option *option);
void	print_ptr(va_list ap, t_option *option);
void	print_integer(va_list ap, t_option *option);

#endif
