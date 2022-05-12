// Write a program to print first n non-square number (non perfect square) .
// Input Format :

// The input contains  

// 1<=n<=10^5

// Output Format:

// Print the non square number separated by space.

#include <stdio.h>
#include <math.h>
int main() {
   long number,i,x;
   long times = 0;
   scanf("%ld", &number);
   printf("\n");
   for(i = 1; times <= number; i++,times++){
      x = sqrt(i);
      if(i != x*x){
         printf("%ld ", i);
      }
   }
   return 0;
}