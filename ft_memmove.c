#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *d;
    const char *s;

    if ( dest == NULL || src == NULL)
        return (NULL);
    
    d = (char *)dest;
    s = (const char *)src;
    i = 0;

    if(d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }else{
        i = n;
        while (i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }
    return ((void *)d);
}