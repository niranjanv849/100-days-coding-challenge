// Write C program to find LCM of two numbers using recursion
#include <stdio.h>
 
// Function declaration
int Findlcm(int x, int y);
 
 
int main()
{
    int num1, num2, LCM;
 
    // Inputting two numbers from user
    printf("Enter any 2 numbers to find LCM: ");
    scanf("%d%d", &num1, &num2);
 
    if(num1 > num2)
        LCM = Findlcm(num2, num1);
    else
        LCM = Findlcm(num1, num2);
 
    printf("LCM of %d and %d = %d", num1, num2, LCM);
 
    return 0;
}
 
int Findlcm(int x, int y)
{
    static int multiple = 0;
 
    // Increments multiple by adding max value to it
    multiple += y;
 
    if((multiple % x == 0) && (multiple % y == 0))
    {
        return multiple;
    }
    else
    {
        return Findlcm(x, y);
    }
}