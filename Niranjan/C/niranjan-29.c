// Write a program to print sum of all odd numbers between 1 to n (including n)

#include<stdio.h>
int main(){
    long x,i=0,sum=0;
    scanf("%ld",&x);
    while(i <= x){
        if(i % 2 != 0){
            sum = sum + i;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}