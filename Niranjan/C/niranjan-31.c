// Write a program to accept a number and print the first n odd numbers

#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=2*x;i++)
    {
     if(i%2==0)
     	continue;
     else
     printf("%d ",i);
    }
    return 0;
}