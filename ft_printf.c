/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:07:47 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/07 16:35:54 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 


int ft_printf(const char *output, ...)
{
	va_list args;
	int ret;
	int index;

	index = 0;
	ret = 0;
	va_start(args, output);
	while (output[index])
	{
		if (output[index] != '%')
			ret += write(1,&output[index++],1);

		else if(ft_strchr("cspdiuxX%",output[index++]))
		{
			//index++;
			if (output[index] == 'c')
				ret += ft_printchar(va_arg(args, int));
			else if (output[index] == 's')
				ret += ft_putstr(va_arg(args, char *));
			 else if (output[index] == 'i' || output[index] == 'd')
				ret += ft_putnbr(va_arg(args, int));
			else if (output[index] == 'u')
				ret += ft_putunbr(va_arg(args, int));
			else if (output[index] == '%')
				ret += write(1,&output[index],1);
			else if (output[index] == 'x' || output[index] == 'X')
				ret += ft_printhexa(va_arg(args, unsigned int),87);
			index++;
		}
	//index++;
	}
	va_end(args);
	return (ret);
}