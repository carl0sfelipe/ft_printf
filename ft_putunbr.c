#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_utoa(n);
	i = ft_putstr(str);
	free(str);
	return (i);
}