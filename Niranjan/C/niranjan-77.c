// Write C to check prime and armstrong numbers using function
#include <stdio.h>
#include <math.h>
 
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
 
int main()
{
    int num, flag;
 
    printf("Enter a positive integer: ");
    scanf("%d", &num);
 
    // Checking prime number
    flag = checkPrimeNumber(num);
    if (flag == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
 
    // Checking Armstrong number
    flag = checkArmstrongNumber(num);
    if (flag == 1)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.",num);
    return 0;
}
 
//function to check prime number
int checkPrimeNumber(int num)
{
    int i, flag = 1;
 
    for(i=2; i<=num/2; ++i)
    {
 
    // condition for non-prime number
        if(num%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
 
//function to check Armstrong Number
int checkArmstrongNumber(int number)
{
    int originalNumber, remainder, result = 0, num = 0, flag;
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++num;
    }
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, num);
        originalNumber /= 10;
    }
 
    // condition for Armstrong number
    if(result == number)
        flag = 1;
    else
        flag = 0;
 
    return flag;
}