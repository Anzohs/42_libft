#include "libc.h"


char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    if (!little)
        return ((char *) big);
    while (big[i] && i < (int)len)
    {
        if (big[i] == little[j])
            {
                k++;
                j++;
            }
        else if (!little[j])
        {
            return ((char *) big + (i - k));
        }
        else
        {
            j = 0;
            i -= k;
            k = 0;
        }
        i++;
    }
    return (NULL);
}