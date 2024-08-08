#include <stdlib.h>
#include "ft_printf.h"

int main(void)
{
    int     n = -2147483648;
    char    c ='U';
    char    *str = "Hello World";
    int     unbr = 1234;
    void    *ptr =&unbr;
    void    *ptr2 =NULL;
    char    *nil = NULL;

    printf("%c\n", c);
    ft_printf("%c\n", c);

    printf("%s\n", str);
    ft_printf("%s\n", str);

    printf("%d\n", n);
    ft_printf("%d\n", n);

    printf("%u\n", unbr);
    ft_printf("%u\n", unbr);

    printf("%p\n", ptr2);
    ft_printf("%p\n", ptr2);

     printf("%p\n", ptr);
    ft_printf("%p\n", ptr);

    printf("%x\n", unbr);
    ft_printf("%x\n", unbr);

    printf("%X\n", unbr);
    ft_printf("%X\n", unbr);

    printf("%%\n");
    ft_printf("%%\n");
     
    printf("i %s\n", nil);
    ft_printf("%s\n", nil);

    return 0;
}
