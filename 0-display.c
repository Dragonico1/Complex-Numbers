#include "main.h"
#include <stdio.h>

void display_complex_number(complex c)
{
     if (c.re == 0)
    {
        printf("%g", c.re);
    }
    if (c.re != 0)
    {
        printf("%g", c.re);
    } if (c.im == 0)
    {
        printf("\n");
        return;
    } if (c.im > 0 && c.re != 0)
    {
        printf(" + ");
    } if (c.im < 0)
    {
        printf(" - ");
    } if (c.im != 1 && c.im != -1)
        printf("%gi", c.im > 0 ? c.im : -c.im);
    else
    {
        printf("i");
    }
    printf("\n");
}
