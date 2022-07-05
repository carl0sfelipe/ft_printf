#include "printf.h"

int	ft_putnbr(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(n);
	i = ft_putstr(str);
	free(str);
	return (i);
}