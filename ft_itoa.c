#include "ft_printf.h"

static int	ft_countdigits(int n)
{
	int				counter;
	unsigned int	res;

	counter = 0;
	res = 0;
	if (n == -2147483648)
		return (-1);
	if (n < 0)
	{
		res = n * -1;
		counter++;
	}
	else
		res = n;
	while (res > 0)
	{
		res = res / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		num;
	int		i;

	i = n;
	num = ft_countdigits(n);
	if (num == -1)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * num + 1);
	if (!str)
		return (0);
	if (n < 0)
		i *= -1;
	str[num] = '\0';
	while (num > 0)
	{
		str[--num] = (i % 10) + '0';
		i = i / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}