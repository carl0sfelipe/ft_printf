#include "ft_printf.h"

int ft_printp(void)
{
    return write(1,&'%',1);
}