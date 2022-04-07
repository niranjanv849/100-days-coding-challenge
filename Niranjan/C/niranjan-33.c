// Write a program to print the natural numbers from n to 1

#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for (int i = x; i >= 1; i--){
        printf("%d ",i);
    }
    return 0;
}