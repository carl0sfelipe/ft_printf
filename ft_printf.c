/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:07:47 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/08 19:49:44 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *output, ...)
{
	va_list	args;
	int		ret;
	int		index;

	index = 0;
	ret = 0;
	va_start(args, output);
	while (output[index])
	{
		if (output[index] != '%')
			ret += write(1, &output[index++], 1);
		else if (ft_strchr("cspdiuxX%", output[index++]))
		{
			ret += ft_printarg(output[index], args);
			index++;
		}
	}
	va_end(args);
	return (ret);
}
