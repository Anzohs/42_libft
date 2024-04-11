#include "libc.h"

size_t  ft_strlen(const char *s);

char    *ft_strjoin(const char *s1, const char *s2)
{
    int i;
    int j;
    size_t len;
    char    *str;

    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc((int)len + 1);
    if (!str)
        return(NULL);
    i = 0;
    j = 0;
    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}