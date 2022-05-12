// Sort elements of array in ascending order.

#include<stdio.h>
#include<conio.h>

void main()
{
int i,a[10],temp,j;
printf("Enter any 10 num in array = \n");
for(i=0;i<=10;i++)
{
scanf("%d",&a[i]);
}
printf("\n\nData before sorting  = ");
for(j=0;j<10;j++)
{
printf("  %d",a[j]);
}
for(i=0;i<=10;i++)
{
for(j=0;j<=10-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\n\n\nData after sorting   = ");
for(j=0;j<10;j++)
{
printf("  %d", a[j]);
}
getch();
}