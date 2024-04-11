#include "libc.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c;
	unsigned char	*d;
	size_t			i;

	if (!src && !dest)
		return (NULL);
	c = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (d > c)
	{
		while (n-- > 0)
			d[n] = c[n];
	}
	else
	{
		i = -1;
		while (++i < n)
			d[i] = c[i];
	}
	return (dest);
}
