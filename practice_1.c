// Program to calculate volume of a cylinder
#include <stdio.h>

int main()
{
    float radius, height;

    printf("What is the radius of the cylinder in meters: \n");
    scanf("%f", &radius);

    printf("What is the height of the cylinder in meters: \n");
    scanf("%f", &height);

    printf("The volumne of the cylinder is %f m^3", 3.14 * radius * radius * height);
    
    return 0;
}