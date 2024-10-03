#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;

    if (dest == NULL && src == NULL)
        return (NULL);


    i = 0;
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}