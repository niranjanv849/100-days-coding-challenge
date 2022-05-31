// Write C program to print even or odd numbers in given range using recursion
#include <stdio.h>
 
 
// Function declaration
void printevenodd(int cur, int limit);
 
int main()
{
    int lowerLimit, upperLimit;
 
    // Inputting lower and upper limit from user
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
 
    printf("Even/odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    printevenodd(lowerLimit, upperLimit);
 
    return 0;
}
 
 
//Recursive function to print even or odd numbers in a given range.
 
void printevenodd(int cur, int limit)
{
    if(cur > limit)
        return;
 
    printf("%d, ", cur);
 
    // Recursively call to printevenodd to get next value
    printevenodd(cur + 2, limit);
}