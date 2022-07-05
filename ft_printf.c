/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:07:47 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/04 22:18:03 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" 


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
		else if(ft_strchr("cspdiuxX%",output[index + 1]))
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