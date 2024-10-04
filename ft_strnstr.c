#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    int ii;
    int little_len;

    if (len < 0)
        return (0);
    little_len = ft_strlen(little);
    if (little_len == 0)
        return ((char *)big);
    i = 0;
    while (i < len && big[i])
    {
        ii = 0;
        if (big[i] == little[ii])
        {
            while (big[i + ii] == little[ii] && little[ii])
                ii++;
            if (ii == little_len)
                return ((char *)big + i);
        }
        i++;
    }
    return (NULL);
}