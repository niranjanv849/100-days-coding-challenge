// Write a program to find the sum of numbers in a given range.

#include<stdio.h>
int main(){
    long x,i,sum=0;
    scanf("%ld %ld",&i,&x);
    while(i <= x){
            sum = sum + i;
        i++;
    }
    printf("%d",sum);
    return 0;
}