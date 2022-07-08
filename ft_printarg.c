/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:53:25 by csiqueir          #+#    #+#             */
/*   Updated: 2022/07/08 19:52:19 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printarg(int output, va_list args)
{
	int	caracteres;

	caracteres = 0;
	if (output == 'c')
		caracteres += ft_printchar(va_arg(args, int));
	else if (output == 's')
		caracteres += ft_putstr(va_arg(args, char *));
	else if (output == 'i' || output == 'd')
		caracteres += ft_putnbr(va_arg(args, int));
	else if (output == 'u')
		caracteres += ft_putunbr(va_arg(args, int));
	else if (output == '%')
		caracteres += write(1, &output, 1);
	else if (output == 'x')
		caracteres += ft_printhexa(va_arg(args, unsigned int), 87);
	else if (output == 'X')
		caracteres += ft_printhexa(va_arg(args, unsigned int), 55);
	else if (output == 'p')
		caracteres += ft_printptr(va_arg(args, unsigned long long), 87);
	return (caracteres);
}
