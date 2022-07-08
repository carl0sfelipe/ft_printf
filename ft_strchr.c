/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:19:29 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/08 18:19:31 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int		count1;
	char	let;

	let = (char)c;
	count1 = 0;
	while (s[count1])
	{
		if (s[count1] == let)
			return ((char *)&s[count1]);
		count1++;
	}
	if (let == 0)
		return ((char *)&s[count1]);
	return (0);
}
