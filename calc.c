#include "calc.h"
#include <math.h>
#include <stdlib.h>

double approximate_logarithm(double x, double tolerance, int base){
    double minimum = 0;
    double maximum = x;
    double diff = tolerance + 1;

    double exponent;

    while (fabs(diff) > tolerance) {
        exponent = (maximum + minimum) / 2;
        diff = pow(base, exponent) - x;

        if (diff < 0) {
            minimum = exponent;
        }
        else {
            maximum = exponent;
        }
    }
    return exponent;
}
