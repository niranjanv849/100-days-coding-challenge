// Write a program to print sum of all numbers from 1 to n

#include<stdio.h>
int main(){
    long x,i=0,sum=0;
    scanf("%ld",&x);
    while(i <= x){
            sum = sum + i;
        i++;
    }
    printf("%d",sum);
    return 0;
}