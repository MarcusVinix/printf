#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{	
	
	printf("----------------------------------------------string--------------------------------------------------\n");
	printf("ORIGINAL\n");
	printf("\n");
	printf("%-60s: |%s|","format identifier", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%20s|", "with minimum field (20) width", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%-20s|", "minimum field (20) left align", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%-20s|", "minimum field (20) left align", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%.8s|", "precision (8) field", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%-.8s|", "precision (8) field left align", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%20.8s|", "minimum (20) and precision (8) field", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%-20.8s|", "minimum (20) and precision (8) field left align", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%*.*s|", "minimum (20) and precision (8) field left align", -20, -8, "quarenta e dois");
	printf("\n\n");
	ft_printf("MY FT_PRINTF\n");
	ft_printf("\n");
	ft_printf("%-60s: |%s|","format identifier", "quarenta e dois");
	ft_printf("\n");
	ft_printf("%-60s: |%20s|", "with minimum field (20) width", "quarenta e dois");
	ft_printf("\n");
	ft_printf("%-60s: |%-20s|", "minimum field (20) left align", "quarenta e dois");
	ft_printf("\n");
	ft_printf("%-60s: |%-20s|", "minimum field (20) left align", "quarenta e dois");
	ft_printf("\n");
	ft_printf("%-60s: |%.8s|", "precision (8) field", "quarenta e dois");
	ft_printf("\n");
	ft_printf("%-60s: |%-.8s|", "precision (8) field left align", "quarenta e dois");
	ft_printf("\n");
	ft_printf("%-60s: |%20.8s|", "minimum (20) and precision (8) field", "quarenta e dois");
	ft_printf("\n");
	ft_printf("%-60s: |%-20.8s|", "minimum (20) and precision (8) field left align", "quarenta e dois");
	ft_printf("\n");
	ft_printf("%-60s: |%*.*s|", "minimum (20) and precision (8) field left align", -20, -8, "quarenta e dois");
	ft_printf("\n");
	return (0);
}