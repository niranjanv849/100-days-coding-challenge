// Delete Duplicate Elements in an Array in C

#include<stdio.h>
#include<conio.h>

void main()
{
 int arr[20], i, j, k, size;
 
   printf("\nEnter Size of an Array : ");
   scanf("%d", &size);
 
   printf("\nEnter any %d Numbers : ",size);
   for (i = 0; i < size; i++)
      scanf("%d", &arr[i]);
 
   printf("\nArray with Unique list  : ");
   for (i = 0; i < size; i++) 
   {
      for (j = i + 1; j < size;)
	  {
         if (arr[j] == arr[i])
		 {
            for (k = j; k < size; k++)
			{
               arr[k] = arr[k + 1];
            }
            size--;
         }
		 else
            j++;
      }
   }
 
   for (i = 0; i < size; i++) 
   {
      printf("%d ", arr[i]);
   }
getch();
}