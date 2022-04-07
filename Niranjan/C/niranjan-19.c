// Write a program to print the factorial of a number

#include <stdio.h>
int main() {
   long a,res=1;
   scanf("%ld",&a);
   for(int i=1; i <= a; i++){
       res*=i;
   }
   printf("%ld",res);
   return 0;
}