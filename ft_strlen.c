#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	x;

	x = 0;
	while (*str)
	{
		str++;
		x++;
	}
	return (x);
}