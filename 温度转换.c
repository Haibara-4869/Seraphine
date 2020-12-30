//华氏温度转为摄氏度。 
//Converts a Fahrenheit temperature to Celsius.
#include<stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)
#include <stdlib.h>
int main(void)
{float fahrenheit,celsius;
printf("Enter Fahrenheit temperature: ");
scanf("%f",&fahrenheit);
celsius = (fahrenheit-FREEZING_PT)*SCALE_FACTOR;
printf("Celsius eauivalent : %.1f\n",celsius);
system("pause");
return 0;
 } 
