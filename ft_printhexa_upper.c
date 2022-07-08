#include "ft_printf.h"

static int	ft_countdigits_hex(unsigned long long res)
{
	int	counter;

	counter = 0;
	if (res == 0)
		return (1);
	while (res > 0)
	{
		res = res / 16;
		counter++;
	}
	return (counter);
}

int	ft_printhexa_upper(unsigned long long n)
{
	int	i;

	i = 0;
	if (n > 15)
		ft_printhexa_upper(n / 16);
	if (n % 16 < 10)
		i += ft_printchar(n % 16 + '0');
	else
		i += ft_printchar(n % 16 + 55);
	return (ft_countdigits_hex(n));
}