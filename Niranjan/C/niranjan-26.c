// Write a program to find the average of numbers in a given range and print the average with two precision point

#include<stdio.h>
int main(){
    long x,i,sum=0,avg;
    scanf("%ld %ld",&i,&x);
    // while(i <= x){
    //     sum = sum + i;
    //     i++;
    // }
    avg = (i+x)/2;
    printf("%.2f",(float)avg);
    return 0;
}