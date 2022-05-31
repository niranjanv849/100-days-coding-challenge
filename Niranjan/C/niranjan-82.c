// Write C program to print all strong numbers between 2 numbers
#include <stdio.h>
 
// Function declarations
long long fact(int num);
void printStrongNumbers(int start, int end);
 
 
int main()
{
    int start, end;
 
    /* Input start and end range */
    printf("Enter the lower limit: ");
    scanf("%d", &start);
    printf("Enter the upper limit: ");
    scanf("%d", &end);
 
    printf("List of strong numbers between %d to %d are: \n", start, end);
    printStrongNumbers(start, end);
 
    return 0;
}
 
 
 
//Printing all strong numbers in a given range
void printStrongNumbers(int start, int end)
{
    long long sum;
    int num;
 
    // Iterates from start to end
    while(start != end)
    {
        sum = 0;
        num = start;
 
        // Calculating sum of factorial of digits
        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10;
        }
 
        // If sum of factorial of digits equal to current number
        if(start == sum)
        {
            printf("%d ", start);
        }
 
        start++;
    }
}
 
//Recursively find factorial of any number
long long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}