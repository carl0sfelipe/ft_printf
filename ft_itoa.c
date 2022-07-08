/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:52:53 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/08 19:53:10 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nbr(long int nb)
{
	int		len;

	len = 0;
	if (nb <= 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*if_zero(char *str)
{
	str[0] = '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	i;
	long int	nbr;

	nbr = n;
	i = len_nbr(nbr);
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (nbr == 0)
		if_zero(str);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		str[i--] = 48 + (nbr % 10);
		nbr = nbr / 10;
	}
	return (str);
}
