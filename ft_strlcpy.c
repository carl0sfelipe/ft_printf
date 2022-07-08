/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:18:52 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/08 18:18:55 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (dstsize == 0)
		return (ft_strlen(src));
	if (ft_strlen(src) < dstsize - 1)
	{
		ft_memcpy(dst, src, ft_strlen(src) + 1);
	}
	else
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (ft_strlen(src));
}
