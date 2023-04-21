#include "main.h"
#include <stdio.h>
#include <math.h>


double modulus(complex c)
{
    double mod;

    mod = sqrt(c.re * c.re + c.im * c.im);

    return mod;
}
