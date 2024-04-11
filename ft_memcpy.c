#include "libc.h"


void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char    *ptr;
    unsigned char    *pt;

    if (!src && !dest)
        return (dest);
    ptr = (unsigned char *)dest;
    pt = (unsigned char*)src;
    while(n)
    {
        *ptr = *pt;
        ptr++;
        pt++;
        n--;
    }
    return (dest);
}