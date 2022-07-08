
#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int     ft_putstr(char *s);
size_t  ft_strlen(const char *str);
int     ft_printf(const char *output, ...);
char    *ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
int     ft_putnbr(int n);
char    *ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int ft_printchar(int param);
int	ft_putunbr(unsigned int n);
char	*ft_utoa(unsigned int n);
int	ft_printhexa(unsigned long long n, int b)
int ft_printptr(unsigned long long ptr,int b);

#endif
