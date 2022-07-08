#include "ft_printf.h"

#include <stdio.h>

int main()
{

	int teste = 234567;

	ft_printf("mPrinting characters: '%c' '%s' '%u' '%d' '%x' '%%%'\n", 'A', "AA",-1,teste,'a');
	printf("oPrinting characters: '%c' '%s' '%u' '%d' '%x' '%%%'", 'A', "AA",-1,teste,'a');

	return 0;
}
