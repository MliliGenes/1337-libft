#include "libft.h"


size_t words_count(char const *s, char c)
{
    size_t word_counts;
    size_t i;
    int in_word;

    i = 0;
    word_counts = 0;
    in_word = 0;
    while (s[i])
    {
        if (s[i] != c && !in_word)
        {
            word_counts++;
            in_word = 1;
        }
        else if (s[i] == c)
        {
            in_word = 0;
        }
        i++;
    }
    return (word_counts);
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t start;
    size_t end;
    char **arr;

    if (!s)
        return (NULL);
    if (!*s)
    {
        arr = malloc(sizeof(char *));
        if (!arr)
            return (NULL);
        arr[0] = NULL;
        return arr;
    }
    if (words_count(s,c) < 1)
    {
        arr = malloc(sizeof(char *));
        arr[0] = NULL;
        return arr;
    }
    arr = (char **)malloc(sizeof(char *) * (words_count(s,c) + 1));
    if (!arr)
        return (NULL);
    i = 0;
    start = 0;
    while (i < words_count(s,c))
    {
        while (s[start] && s[start] == c)
            start ++;
        end = start;
        while (s[end] && s[end] != c)
            end ++;
        arr[i] = ft_substr(s, (unsigned int)start, (size_t)(end - start));
        if(!arr[i])
        {
            while (i >= 0)
            {
                free(arr[i]);
                i--;
            }
            free(arr);
            return NULL;
        }
        start = end;
        i++;
    }
    arr[i] = NULL;
    return (arr);
}
