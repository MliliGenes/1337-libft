#include "libft.h"


size_t words_count(char const *s, char c)
{
    size_t word_counts;
    size_t i;

    i = 0;
    word_counts = 0;
    while (s[i])
    {
        if (s[i] != c && i == 0)
        {    
            word_counts ++;
            i ++;
            continue;
        }
        if (s[i] != c && s[i - 1] == c)
            word_counts ++;
        i ++;
    }
    return (word_counts);
}

char **ft_split(char const *s, char c)
{
    size_t words;
    char **arr;

    if (!s || !*s)
        return (NULL);
    words = words_count(s);
    arr = malloc(sizeof(char *) * words);
    if ()
}
