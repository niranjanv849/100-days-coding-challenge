// Write a program to find the product of numbers in a given range.

#include <stdio.h>
int main() {
   long a,b;
   long res=1;
   scanf("%ld %ld",&a,&b);
   for(int i=a; i <= b; i++){
       res*=i;
   }
   printf("%ld",res);
   return 0;
}