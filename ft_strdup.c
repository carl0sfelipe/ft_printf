#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		len;

	len = ft_strlen((char *)s1);
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, len + 2);
	return (dst);
}