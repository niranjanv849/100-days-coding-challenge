// Merge Two Array Program in C

#include<stdio.h>
#include<conio.h>

void main()
 {
   int a[10],b[10],c[20],i;
   printf("Enter Elements in 1st Array: ");
   for(i=0;i<10;i++)
   {
   scanf("%d",&a[i]);
   }
   printf("Enter Elements in 2nd Array: ");
   for(i=0;i<10;i++)
   {
   scanf("%d",&b[i]);
   }
   printf("\nElements of Array After Merge: ");
   for(i=0;i<10;i++)
   {
    c[i]=a[i];
    c[i+10]=b[i];
   }
   for(i=0;i<20;i++)
   {
   printf(" %d",c[i]);
   }
 }