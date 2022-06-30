/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:07:47 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/30 20:44:51 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *output, ...)
{
	va_list args;
	va_start(args, output);
	
	char ch = va_arg(args, int);
	putchar(ch);
	
	return strlen((const char *)ch);
	va_end(args);
}
int main()
{
	ft_printf("Printing a character: '%c'",'A');
	return 0;
}
