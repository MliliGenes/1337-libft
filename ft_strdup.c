#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t len;
    size_t i;
    char *dup;

    len = ft_strlen(s);
    dup = malloc(len + 1);
    if (!dup)
        return (NULL);
    i = 0;
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}