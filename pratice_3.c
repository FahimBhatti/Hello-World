// Program to calculate simple interest
#include <stdio.h>

void main()
{
    int principal_amount, Num_of_years, Rate_of_interest, interest_amount;

    printf("What is your principal amount? \n");
    scanf("%d", &principal_amount);

    printf("Enter the number of years: \n");
    scanf("%d", &Num_of_years);

    printf("Enter the rate of interest: \n");
    scanf("%d", &Rate_of_interest);

    interest_amount = (principal_amount * Num_of_years * Rate_of_interest) / 100;

    printf("Total interest amount is %d rupees", interest_amount);

}