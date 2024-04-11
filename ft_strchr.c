#include "libc.h"

char    *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    char    l;

    i = 0;
    l = (char) c;
    while (s[i])
    {
        if (s[i] == l)
            return ((char *) s + i);
        i++;
    }
    if (s[i] == l)
        return ((char *) s + i);
    return (NULL);
}