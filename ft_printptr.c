/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:22:40 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/08 18:24:16 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long ptr, int b)
{
	int	ret;

	ret = 0;
	ret += ft_putstr("0x");
	ret += ft_printhexa(ptr, b);
	return (ret);
}
