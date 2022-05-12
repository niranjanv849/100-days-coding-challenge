// Delete an Array Element Programs in C

#include<stdio.h>
#include<conio.h>

void main()
{
 int i,a[5],no,pos;
 printf("Enter data in array: ");
 for(i=0;i<5;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("\n\nStored Data in array: ");
 for(i=0;i<5;i++)
 {
 printf("  %d",a[i]);
 }
 printf("\n\nEnter poss. of number: ");
 scanf("%d",&pos);
 if(pos>5)
 {
 printf("\n\nThis value is out of range ");
 }
 else
 {
 --pos;
 for(i=pos;i<=4;i++)
 {
 a[i]=a[i+1];
 }
 printf("\n\nNew data in array: ");
 for(i=0;i<4;i++)
 {
 printf("  %d",a[i]);
 }
 }
}