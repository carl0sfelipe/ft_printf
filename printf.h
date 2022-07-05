
#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int     ft_putstr(char *s);
size_t  ft_strlen(const char *str);
int     ft_printf(const char *output, ...);
char    *ft_strchr(const char *s, int c);

#endif
