// Write C program to find prime numbers in given range using functions
#include <stdio.h>
 
// Function declarations
int isPrime(int num);
void printPrimes(int lower, int upper);
 
int main()
{
    int lower, upper;
 
    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d", &lower, &upper);
 
    // Calling function to print all primes between the given range.
    printPrimes(lower, upper);
 
    return 0;
}
 
 
 
// Print all prime numbers between lower limit and upper limit.
 
void printPrimes(int lower, int upper)
{
    printf("List of prime numbers between %d to %d are: ", lower, upper);
 
    while(lower <= upper)
    {
        // Printing if current number is prime
        if(isPrime(lower))
        {
            printf("%d ", lower);
        }
 
        lower++;
    }
}
 
//Checking whether a number is prime or not
int isPrime(int num)
{
    int i;
 
    for(i=2; i<=num/2; i++)
    {
        /*
         If the number is divisible by any number
         other than 1 and self then it is not prime
         */
        if(num % i == 0)
        {
            return 0;
        }
    }
 
    return 1;
}