#include "libft.h"

typedef enum {
    FALSE = 0,
    TRUE = 1
} Bool;

Bool is_in_set(const char c,const char *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (TRUE);
        i++;
    }
    return (FALSE);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t ii;
    
    if (!s1 && !set)
        return (NULL);
    i = 0;
    ii = ft_strlen(s1);
    while (s1[i] && is_in_set(s1[i], set) == TRUE)
        i++;
    if (i == ii)
        return (ft_strdup(""));
    while (ii < i && is_in_set(s1[ii], set) == TRUE)
        ii--;
     return (ft_substr(s1, i, (ii - i)));
}