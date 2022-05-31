// Write C program to check even or odd using functions
#include <stdio.h>
 
int isEven(int num)
{
    return !(num & 1);
}
int main()
{
    int num;
 
    // Inputting number from user
    printf("Enter any number: ");
    scanf("%d", &num);
 
    // If isEven() function return 0 then the number is even
    if(isEven(num))
    {
        //printing even number
        printf("The number is even.");
    }
    else
    {
        //printing odd number
        printf("The number is odd.");
    }
 
    return 0;
}