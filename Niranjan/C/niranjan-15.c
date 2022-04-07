// Write a program to print the Odd factors of the given number n

#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int ind=1;ind<num;ind++)
    {
        if(num % ind == 0)
        {   
            if(ind % 2 == 1)
            printf("%d ",ind);
        }
    }
}