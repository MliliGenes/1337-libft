#include "libft.h"

int ft_atoi(const char *nptr)
{
    int nb;
    int sign;
    int i;

    nb = 0;
    sign = 1;
    i = 0;
    while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9'){
        nb = nb * 10 + (nptr[i] - '0');
        i++;
    }

    return (nb * sign);
}