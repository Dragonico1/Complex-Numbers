#include "main.h"
#include <stdio.h>
#include <math.h>

double argument(complex c)
{
    double arg;

    if (c.re == 0 && c.im == 0)
        arg = 0;
    else if (c.re > 0)
        arg = atan(c.im / c.re);
    else if (c.re < 0 && c.im >= 0)
        arg = atan(c.im / c.re) + M_PI;
    else
        arg = atan(c.im / c.re) - M_PI;

    return arg;
}
