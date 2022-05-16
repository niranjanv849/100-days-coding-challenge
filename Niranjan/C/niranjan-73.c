// C program to Calculate 1 + 2 + 3 + 4 + 5 + ... + n series

#include<stdio.h>
#include<conio.h>

void main()
{
int i,n,sum=0;
clrscr();
    n=10;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum: %d",sum);
getch();
}