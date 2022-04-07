// The numbers that are completely divisible by the given value (it means the remainder should be 0) called as factors of a given number.


#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int ind =1;ind<=num;ind++)
    {
        if(num%ind == 0)
            printf("%d ",ind);
    }
}