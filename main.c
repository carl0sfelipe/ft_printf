#include "ft_printf.h"

#include <stdio.h>

int main()
{
	ft_printf("mPrinting characters: '%c' '%s' '%u' '%d' '%%' '%%%'\n", 'A', "AA",-1,9,'a');
	printf("oPrinting characters: '%c' '%s' '%u' '%d' '%%' '%%%'", 'A', "AA",-1,9,'a');

	return 0;
}
