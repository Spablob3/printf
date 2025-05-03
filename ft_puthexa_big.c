

#include "ft_printf.h"

int ft_puthexa_big(unsigned long n)
{
    int     count;
    char    *hexa;

    hexa = "0123456789ABCDEF";
    count = 0;
    if (n >= 16)
    {
        count += ft_puthexa_big(n / 16);
    }
    count += ft_putchar(hexa[n % 16]);
    return (count);
}