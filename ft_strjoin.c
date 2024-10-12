#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t total_size;
    size_t i;
    size_t ii;
    char *joined_strs;

    total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
    joined_strs = malloc(total_size);
    if (!joined_strs)
        return (NULL);
    i = 0;
    ii = 0;
    while (s1[i])
        joined_strs[ii++] = s1[i++];
    i = 0;
    while (s2[i])   
        joined_strs[ii++] = s2[i++];
    joined_strs[ii] = '\0';
    return (joined_strs);
}