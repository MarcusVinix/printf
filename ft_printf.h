#ifndef FT_PRINTF_H
# define	FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_option
{
	int index;
	int count;
	int flag_minus;
	int flag_zero;
	int width;
	int dot;	     // to know if there is precision
	int precision;   // initially set as -1 instead of 0
	int flag_pre_va; // if precision is a variable argument
	int num_m;	     // is number negative?
    char type;
}	t_option;

int		ft_printf(const char * format, ...);
int		print_string(va_list ap, t_option *option);
void	check_options(const char *format, va_list ap, t_option *option);

#endif