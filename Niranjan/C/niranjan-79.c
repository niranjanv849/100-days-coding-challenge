// Write C Program to convert binary number to decimal
#include <stdio.h>
#include <math.h>
 
//Function declartion
int convertBinaryToDecimal(long long n);
 
int main()
{
    long long n;
    printf("Enter a binary number: ");
    // Inputting number from user
    scanf("%lld", &n);
    //Printing binary number to decimal
    printf("%lld in binary = %d in decimal", n, convertBinaryToDecimal(n));
    return 0;
}
 
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}