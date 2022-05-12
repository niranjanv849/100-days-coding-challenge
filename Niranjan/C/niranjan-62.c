// Find Even and Odd Elements from Array in C

#include<stdio.h>
#include<conio.h>

 void main()
  {
   int arr[20],even[20],odd[20],i,j=0,k=0,no;
   printf("Enter size of array: ");
   scanf("%d",&no);
   printf("Enter any %d elements in Array: ",no);
   for(i=0; i<no;i++)
   {
   scanf("%d",&arr[i]);
   }
   for(i=0; i<no;i++)
   {
   if(arr[i]%2==0)
   {
    even[j]=arr[i];
    j++;
   }
   else
   {
   odd[k]=arr[i];
   k++;
   }
   }
  printf("\nEven Elements: ");
  for(i=0; i<j ;i++)
   {
    printf("%d ",even[i]);
   }
  printf("\nOdd Elements: ");
  for(i=0; i<k; i++)
   {
    printf("%d ",odd[i]);
   }
  }