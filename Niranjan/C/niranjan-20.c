// Write a program to print the factors of the number in such a way that they occur in pairs

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
            if(num/ind == ind)
                printf("%d",ind);
            else
                printf("%d,%d\n",ind,num/ind);
        }
    }
}