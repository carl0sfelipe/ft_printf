
#include "ft_printf.h" 

int ft_printchar(int param)
{
        return write(1,&param,1);
}