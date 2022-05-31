// Write C program to print perfect numbers between given interval using function
#include <stdio.h>
 
// Function declarations
int isPerfect(int num);
void printPerfect(int start, int end);
 
 
 
int main()
{
    int start, end;
 
    // Inputting lower and upper limit to print perfect numbers
    printf("Enter lower limit to print perfect numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print perfect numbers: ");
    scanf("%d", &end);
 
    printf("All perfect numbers between %d to %d are: \n", start, end);
    printPerfect(start, end);
 
    return 0;
}
 
int isPerfect(int num)
{
    int i, sum;
 
    // Finding sum of all proper divisors
    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
 
    /*
      If sum of proper positive divisors equals to given number
      then the number is perfect number
     */
    if(sum == num)
        return 1;
    else
        return 0;
}
 
//Printing all perfect numbers
void printPerfect(int start, int end)
{
    // Iterating from start to end
    while(start <= end)
    {
        if(isPerfect(start))
        {
            printf("%d ", start);
        }
 
        start++;
    }
}