#include <stdio.h>
#include "Conversion.h"

double Farenheit(double celcius){
    return (1.8) * celcius + 32.0;
}
double Celcius(double fahr){
    return (5.0 / 9.0) * (fahr - 32.0);
}