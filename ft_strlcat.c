#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t dst_len;
    size_t src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (size <= dst_len)
        return (size + src_len);
    i = 0;
    while (i < size - dst_len - 1 && src[i])
    {
        dst[i + dst_len] = src[i];
        i++;
    }
    dst[i + dst_len] = '\0';
    return (dst_len + src_len);
}