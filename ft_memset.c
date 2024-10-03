#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    int i;

    i = 0;
    while (i < (int)len)
    {
        ((unsigned char *)b)[i++] = (unsigned char)c;
    }

    return (b);
}
