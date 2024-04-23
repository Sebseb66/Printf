#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
        int len;
        int len2;
        unsigned int ui;
        void *addr;

                len = printf("Let's try to printf a simple sentence.\n");
                len2 = ft_printf("Let's try to printf a simple sentence.\n");
                ui = (unsigned int)INT_MAX + 1024;
                addr = (void *)0x7ffe637541f0;
                printf("Length:[%d, %i]\n", len, len);
                ft_printf("Length:[%d, %i]\n", len2, len2);
                printf("Negative:[%d]\n", -762534);
                ft_printf("Negative:[%d]\n", -762534);
                printf("Unsigned:[%u]\n", ui);
                ft_printf("Unsigned:[%u]\n", ui);
                printf("Unsigned octal:[%o]\n", ui);
                ft_printf("Unsigned octal:[%o]\n", ui);
                printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
                ft_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
                printf("Character:[%c]\n", 'H');
                ft_printf("Character:[%c]\n", 'H');
                printf("String:[%s]\n", "I am a string !");
                ft_printf("String:[%s]\n", "I am a string !");
                printf("Address:[%p]\n", addr);
                ft_printf("Address:[%p]\n", addr);
                len = printf("Percent:[%%]\n");
                len2 = ft_printf("Percent:[%%]\n");
                printf("Len:[%d]\n", len);
                ft_printf("Len:[%d]\n", len2);
                return (0);
}

