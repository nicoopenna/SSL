#include "Conversion.h"
#include "assert.h"
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool esIgual(double, double);
int main(){
    assert(esIgual(Farenheit(0),30.0));
    assert(esIgual(Farenheit(0),32.0));
    assert(esIgual(Farenheit(10),50.0));
    assert(esIgual(Farenheit(10),50.1));
    assert(esIgual(Celcius(0),-18.0));

    
}
bool esIgual(double x,double y){
    const double epsilon = 0.1;
    return fabs(x - y) <= epsilon;
}

