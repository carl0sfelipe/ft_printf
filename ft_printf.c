/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:07:47 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/02 20:57:24 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>


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


int ft_printf(const char *output, ...)
{
	va_list args;
	int variable;
	int index;

	index = 0;
	variable = 0;
	va_start(args, output);
	while (output[index])
	{
		if (output[index] != '%')
		{
			putchar(output[index]);
			variable++;
			index++;
		}
		else
		{
			index++;
			if (output[index] == 'c')
			{
				putchar(va_arg(args, int));
				variable++;
				index++;
			}
			else if (output[index] == 's')
			{
				variable += ft_putstr(va_arg(args, char *));
				index++;
			}
		}
	}
	va_end(args);
	return (variable);
}
int main()
{
	ft_printf("Printing characters: '%c' '%s' '%c' '%s'", 'A', "AA",'B',"BB");
	return 0;
}
