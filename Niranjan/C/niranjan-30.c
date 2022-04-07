// Write a program to find sum of all even numbers between 1 to n

#include<stdio.h>
int main(){
    long x,i=0,sum=0;
    scanf("%ld",&x);
    while(i < x){
        if(i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}