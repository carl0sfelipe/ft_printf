/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:34:31 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/08 18:34:34 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countdigits_hex(unsigned long long res)
{
	int	len;

	len = 0;
	if (res == 0)
		return (1);
	while (res > 0)
	{
		res = res / 16;
		len++;
	}
	return (len);
}

int	ft_printhexa(unsigned long long n, int format)
{
	int	index;

	index = 0;
	if (n > 15)
		ft_printhexa(n / 16, format);
	if (n % 16 < 10)
		index += ft_printchar(n % 16 + '0');
	else
		index += ft_printchar(n % 16 + format);
	return (ft_countdigits_hex(n));
}
