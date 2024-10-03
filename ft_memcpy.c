#include <libft.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}