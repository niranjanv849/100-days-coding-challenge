// Find Largest Element in Array Program in C

#include<stdio.h>
#include<conio.h>

 void main()
{
    int array[100], count, i, largest;
    printf("Enter Number of Elements Want in Array\n");
    scanf("%d",&count);

    printf("Enter Any %d count Elemnts in Array \n", count);
      
    // Read array elements
    for(i = 0; i < count; i++)
{
        scanf("%d",&array[i]);
    }
     
    largest = array[0];
    // search num in inputArray from index 0 to elementCount-1 
    for(i = 0; i < count; i++)
{
	if(array[i] > largest)
{
	    largest = array[i];
	}
    }

    printf("Largest Element in Array is: %d",largest);
 
}