#include<stdio.h>   
#include <conio.h>
int main()
{    
    FILE *f;
    f = fopen("output.txt","w");
    fprintf(f,"Hello world!");     
    fclose(f);
    return 0;
}