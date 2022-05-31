// Write C program to find Length of the String by passing String/Character
#include<stdio.h>
 
//function declaration
int stringLength(char *);
 
int main()
{
    char text[100];
    int length;
 
    printf("Enter text (max- 100 characters): ");
    scanf("%[^\n]s",text);
 
    length = stringLength(text);
 
    printf("Input text is: %s\n",text);
    printf("Length is: %d\n",length);
 
    return 0;
}
 
 
int stringLength(char *str)
{
    int len=0;
 
    //calculating string length
    for(len=0; str[len]!='\0'; len++);
 
    //returning len
    return len;
}