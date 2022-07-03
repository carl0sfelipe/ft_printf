/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:20:59 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/02 20:51:35 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_putstr(char *s)
{
/*	int	i;

	i = 0;*/
	if (!s)
		return 0;
	/*while (s[i])
	{*/
		write(1,s, strlen(s));
	/*	i++;
	}*/
	return strlen(s);
}
