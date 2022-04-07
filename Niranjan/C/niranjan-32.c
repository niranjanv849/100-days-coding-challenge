// Write a program to print all the even numbers from 1 to n

#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for (int i = 2; i <= x; i=i+2){
        printf("%d ",i);
    }
    return 0;
}