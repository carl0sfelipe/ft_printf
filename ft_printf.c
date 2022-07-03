/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:07:47 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/02 22:15:24 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>


int	ft_putstr(char *s)
{
	if (!s)
		return 0;

	write(1,s, strlen(s));

	return strlen(s);
}


int ft_printf(const char *output, ...)
{
	va_list args;
	int variable;
	int index;
	char c;

	index = 0;
	variable = 0;
	va_start(args, output);
	while (output[index])
	{
		if (output[index] != '%')
		{
			write(1,&output[index],1);
			variable++;
			index++;
		}
		else
		{
			index++;
			if (output[index] == 'c')
			{
				c = va_arg(args, int);
				write(1,&c ,1);
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
	ft_printf("Printing characters: '%c' '%s' '%c' '%s'", 'A', "AA",'B',"BBB");
	return 0;
}
