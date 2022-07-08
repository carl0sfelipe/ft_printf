#include "ft_printf.h"

int ft_printptr(unsigned long long ptr, int b)
{
    int ret;

    ret = 0;
    ret += ft_putstr("0x");
    ret += ft_printhexa(ptr, b);
    return (ret);
}