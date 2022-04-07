// Write a program to print factors of a number in pairs

#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int ind=1;ind<=sqrt(num);ind++)
    {
        if(num%ind == 0)
        {
            printf("%d,%d\n",ind,num/ind);
            // printf("\n");
        }
    }
}