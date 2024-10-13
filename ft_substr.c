#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *sub;
    size_t i;
    size_t s_len;
    size_t substr_len;

    if (!s)
        return (NULL);
    s_len = ft_strlen(s);
    if (start >= s_len)
        return (ft_strdup(""));
    substr_len = (s_len - start < len) ? s_len - start : len;
    sub = malloc(substr_len + 1);
    if (!sub)
        return (NULL);
    i = 0;
    while (i < substr_len)
        sub[i++] = s[start + i];
    sub[i] = '\0';
    return sub;
}
