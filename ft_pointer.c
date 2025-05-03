
#include "ft_printf.h"

int ft_pointer(void *ptr)
{
    unsigned long   address;
    int             count;

    address = (unsigned long)ptr;
    count = 0;
    if(!ptr)
    {
        return(ft_putstr("(nil)"));
    }
    count += ft_putstr("0x");
    count += ft_puthexa(address);
    return (count);
}
