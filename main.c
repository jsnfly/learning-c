#include "calc.h"
#include <stdio.h>


int main (){
    double x = 30;
    double tolerance = 0.0001;
    int base = 2;

    printf("Result: %lf\n", approximate_logarithm(x, tolerance, base));
}
