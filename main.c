#include "ft_printf.h"

#include <stdio.h>

int main()
{

	int *teste = 320000;

	ft_printf("mPrinting characters: '%p'\n",teste);
	printf("oPrinting characters:  '%p' ", teste);

	return 0;
}