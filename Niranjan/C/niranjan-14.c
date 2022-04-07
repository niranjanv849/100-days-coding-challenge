// Write a program to generate Lowercase alphabets from a given range.

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i = num; i <= 122; i++){
        printf("%c ",i);
    }
    return 0;
}

// Write a program to generate uppercase alphabets using ASCII values for the given range.

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i = num; i <= 90; i++){
        printf("%c ",i);
    }
    return 0;
}