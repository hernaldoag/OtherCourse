#include <stdio.h>
const int HOTDOGCOST = 15;
const float TOTALBILL = 105.30;
const char SEX = 'M';

#define PIZZACOST 2.5
const char NEWLINE = '\n';

int main (){
    float costoPizzas;
    float numberOfSlices = 3;
    costoPizzas = PIZZACOST * numberOfSlices;

    printf("Total Bill: %c %f", NEWLINE, costoPizzas);
    
    return 0;

}