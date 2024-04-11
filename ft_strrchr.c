#include "libc.h"


size_t  ft_strlen(const char *s);
char    *ft_strrchr(const char *s, int c)
{
    int i;
    char    l;

    i = (int)ft_strlen(s);
    l = (char) c;
    while (i > 0)
    {                
        if (s[i] == l)
            return ((char *)s + i);
        i--;
    }
    if (s[i] == l)
        return ((char *)s + i);
    return (NULL);
}