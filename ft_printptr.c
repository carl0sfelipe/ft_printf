#include "ft_printf.h"

int ft_printptr(unsigned long long ptr, int format)
{
    int ret;

    ret = 0;
    ret += ft_putstr("0x");
    ret += ft_printhexa(ptr,format);
    return (ret);
}