// Write a program to print all odd numbers in the first column and print all even numbers in the second column in the range from 1 to n

 #include<stdio.h>
 int main()
 {
     int num;
     scanf("%d",&num);
     for(int ind=1;ind<=num;ind++)
     {
        if(ind%2 == 1)
            printf("%d",ind);
        if(ind%2 == 0)
        {
            printf(" %d",ind);
            printf("\n");
        }
   }
    
 }