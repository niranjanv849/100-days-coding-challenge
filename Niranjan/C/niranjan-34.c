// Write a program to print all the natural numbers from 1 to n.

#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for (int i = 1; i <= x; i++){
        printf("%d ",i);
    }
    return 0;
}