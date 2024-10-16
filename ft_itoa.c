#include "libft.h"

void count_digits(int n, size_t *i)
{   
    unsigned int p_n;

    if (n < 0)
    {
        p_n = (unsigned int)(-n);
        (*i)++;
    }
    else
        p_n = (unsigned int)n;
    while (p_n != 0)
    {
        p_n /= 10;
        (*i)++;
    }
}

void filling_set(char *int_str,int n,int len)
{
    unsigned int p_n;
    
    int_str[len--] = '\0';
    if (n < 0)
    {    
        p_n = (unsigned int)(-n);
        int_str[0] = '-';
    }
    else
        p_n = (unsigned int)n;
    while (len > 0)
    {
        int_str[len--] = (char)((p_n % 10) + '0');
        p_n /= 10;
    }
    if (p_n > 0)
        int_str[0] = (char)((p_n % 10) + '0');
}

char *ft_itoa(int n)
{
    size_t nb_size;
    char *int_str;

    if (n==0)
    {
        int_str = (char *)malloc(2);
        int_str[0] = '0';
        int_str[1] = '\0';
        return (int_str);
    }
    nb_size = 0;
    count_digits(n, &nb_size);
    int_str = (char *)malloc(nb_size + 1);
    if (!int_str)
        return (NULL);
    filling_set(int_str, n, nb_size);
    return (int_str);
}
