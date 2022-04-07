// Write a program to find the sum of squares of first n natural numbers

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int sum = (n * (n + 1) * (2 * n + 1)) / 6;
   printf("%d",sum);
   return 0;
}