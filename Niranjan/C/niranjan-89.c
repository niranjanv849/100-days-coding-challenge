// Write C program to find reverse of a number using recursion
#include <stdio.h>
#include <math.h>
 
 
//Fuction declaration
int reverseNumber(int num);
 
 
int main()
{
    int num, reverse;
 
    // Inputting number from user
    printf("Enter any number: ");
    scanf("%d", &num);
 
    // Calling function to reverse any number
    reverse = reverseNumber(num);
 
    printf("Reverse of %d : %d", num, reverse);
 
    return 0;
}
 
 
 
//Recursive function to find reverse of any number
 
int reverseNumber(int num)
{
    // Find total digits in num
    int digit = (int) log10(num);
 
    // Base condition
    if(num == 0)
        return 0;
 
    return ((num%10 * pow(10, digit)) + reverseNumber(num/10));
}