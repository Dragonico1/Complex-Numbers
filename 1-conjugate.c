#include "main.h"
#include <stdio.h>

complex conjugate(complex c)
{
    complex conjugate;

    conjugate.re = c.re;
    conjugate.im = - c.im;

    return conjugate;
}
