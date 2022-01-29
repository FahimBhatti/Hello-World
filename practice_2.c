// Program to convert temperature in celcius to farenheit
#include <stdio.h>

int main()
{
    float celcius, farenheit;

    printf("Enter the temperature in celcius: \n");
    scanf("%f", &celcius);

    farenheit = (celcius * 9 / 5) + 32;

    printf("Temperature in farenheit is %f", farenheit);
    return 0;
}