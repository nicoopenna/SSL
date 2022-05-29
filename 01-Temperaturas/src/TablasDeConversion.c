#include <stdio.h>
#include "Conversion.h"
void PrintTablaFarenheit();
void PrintTablaCelcius();
int main(void)
{
    PrintTablaFarenheit();
    PrintTablaCelcius();
    return 0;
}
void PrintTablaFarenheit()
{
    const int LOWER = 0;   // lower limit of table
    const int UPPER = 300; // upper limit
    const int STEP = 20;   // step size
    printf("Tabla de Farenheit a Celcius\n");
    printf("%5s %9s\n", "FAHR", "CELCIUS");
    for (double fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%5.0f %9.0f\n", fahr, Celcius(fahr));
    }
}
void PrintTablaCelcius(){
    const int LOWER = 0;
    const int UPPER = 150;
    const int STEP = 10;
    printf("Tabla de Celcius a Farenheit\n");
    printf("%5s %9s\n", "CELCIUS", "FAHR");
    for (double celcius = LOWER; celcius <= UPPER; celcius += STEP){
        printf("%5.0f %9.0f\n", celcius, Farenheit(celcius));
    }
}