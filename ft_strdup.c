#include "libc.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	int		j;
	char	*ptr;

	j = 0;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	while (s[j])
	{
		ptr[j] = s[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
