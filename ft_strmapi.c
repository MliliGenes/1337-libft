#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *p;

    if (!s || !f)
        return (NULL);
    p = (char *)malloc(ft_strlen(s) + 1);
    if (!p) 
        return NULL;
    i = 0;
    while (s[i])
    {
        p[i] = (*f)((unsigned int)i, s[i]);
        i++;
    }
    p[i] = '\0';
    return (p);
}
