#include "libft.h"

char *strchr(const char *s, int c)
{
    while (*s){
        if (*s == (char)c){
            return ((char *)s);
        }
        s++;
    }
    return (NULL);
}