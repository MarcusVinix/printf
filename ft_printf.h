#ifndef FT_PRINTF_H
# define	FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

# define B_DEC "0123456789"
# define B_HEXA_LO "0123456789abcdef"
# define B_HEXA_UP "0123456789ABCDEF"

typedef struct s_option
{
	int	space;
	int	zero;
	int	index;
	int	count;
	int	wd;
	int	dot;
	int	precision;
	int	num_n;
	int	fl_minus;
	int	fl_zero;
	int	fl_zero_p;
	int	fl_sp;
	int	fl_hash;
	int	fl_plus;
}	t_option;

int		ft_printf(const char *format, ...);
void	print_string(va_list ap, t_option *option);
void	check_options(const char *format, va_list ap, t_option *option);
void	print_char(va_list ap, t_option *option);
void	print_ptr(va_list ap, t_option *option);
void	print_integer(char c, va_list ap, t_option *option);
void	print_porcent(t_option *option);

#endif