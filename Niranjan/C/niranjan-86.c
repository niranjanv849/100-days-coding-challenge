// Write C program to find power of a number using recursion
#include <stdio.h>
 
//function declaration
double Power(double base, int exponent);
 
int main()
{
    double base, power;
    int exponent;
 
    // Inputting base and exponent from user
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
 
    // Call Power function
    power = Power(base, exponent);
 
    printf("%.2lf ^ %d = %f", base, exponent, power);
 
    return 0;
}
 
/*
  Calculating power of any number.
  Returns base ^ exponent
 */
double Power(double base, int exponent)
{
    // Base condition
    if(exponent == 0)
        return 1;
    else if(exponent > 0)
        return base * pow(base, exponent - 1);
    else
        return 1 / pow(base, - exponent);
}