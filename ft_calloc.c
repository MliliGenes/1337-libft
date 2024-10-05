#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *pointer;
    int total_size;

    total_size = nmemb * size;
    if (total_size == 0)
        return (NULL);
    pointer = malloc(total_size);
    if (pointer == NULL)
        return NULL;
    ft_bzero(pointer, nmemb);
    return (pointer);
}