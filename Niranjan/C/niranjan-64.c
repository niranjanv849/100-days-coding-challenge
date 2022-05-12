// Reverse an Array Elements Program in C

#include<stdio.h>
#include<conio.h>

 void main()
  {
   int a[20],b[20],i,j,n;
   printf("How many elements you want to enter: ");
   scanf("%d",&n);
   printf("Enter any %d elements in Array: ",n);
   for(i=0; i<n ;i++)
   {
   scanf("%d",&a[i]);
   }
   printf("Reverse of Array: ");

   for(i=n-1,j=0; i>=0;i--,j++)
   {
    b[i]=a[j];
   }
   for(i=0; i<n ;i++)
   {
   printf("%d ",b[i]);
   }
  }