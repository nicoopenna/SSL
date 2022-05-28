#include <stdio.h>
#include "Conversion.h"
int main(void){
 const int LOWER = 0; // lower limit of table
 const int UPPER = 300; // upper limit
 const int STEP = 20; // step size
 printf("%5s %9s\n", "FAHR", "CELCIUS");
 for(double fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
 printf("%5.0f %9.0f\n", fahr, Celcius(fahr) );
}