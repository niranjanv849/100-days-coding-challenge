// Search an Array Elements Program in C

#include<stdio.h>
#include<conio.h>

void main()
{
int i,a[50],num,size;
printf("Enter size of array: ");
scanf("%d",&size);
printf("Enter any %d element in array: \n",size);
for(i=0; i<size; i++)
{
scanf("%d",&a[i]);
}
printf("Enter number for find their position: ");
scanf("%d",&num);
for(i=0; i<size; i++)
{
if(a[i]==num)
{
printf("\n index of %d is  %d",num,i);
}
}
}