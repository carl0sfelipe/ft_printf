/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:19:13 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/08 18:19:15 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		len;

	len = ft_strlen((char *)s1);
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, len + 2);
	return (dst);
}
