// Write a program to count the number of factors of a given number

#include<stdio.h>
#include<math.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    for(int ind=1;ind<=num;ind++)
    {
        if(num%ind == 0)
        {   count++;
            // printf("%d,%d\n",ind,num/ind);
            // printf("\n");
        }
    }
    printf("%d",count);
}