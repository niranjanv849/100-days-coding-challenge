// Write C program to find sum of natural numbers in given range using recursion
#include <stdio.h>
 
 
// Function declaration
int sumofnnumbers(int start, int end);
 
int main()
{
    int start, end, sum;
 
    // Inputting lower and upper limit from user
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
 
    sum = sumofnnumbers(start, end);
 
    printf("Sum of natural numbers from %d to %d : %d", start, end, sum);
 
    return 0;
}
 
 
//Recursively find the sum of natural number
 
int sumofnnumbers(int start, int end)
{
    if(start == end)
        return start;
    else
        return start + sumofnnumbers(start + 1, end);
}