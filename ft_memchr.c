#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char _c;
    const unsigned char *_s;
    size_t i;

    i = 0;
    _c = (unsigned char)c;
    _s = (const unsigned char *)s;
    while (i < n && _s[i])
    {
        if(_s[i] == _c)
            return (_s + i);
        i++;
    }
    return (NULL);
}