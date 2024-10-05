#include "libft.h"


char    *ft_strdup(char *s)
{
    char *c;
    size_t i;
    size_t s_len;

    i = 0;
    s_len = ft_strlen(s);
    c = malloc(s_len + 1);
    if (!c)
        return (NULL);
    while (i < s_len)
        c[i++] = s[i];
    c[i] = '\0';
    return c;
}

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

// int main(int ac, char **av)
// {
//     char s[] = "hello, hell";
//     printf("%s", ft_substr(s,5,4));
// }