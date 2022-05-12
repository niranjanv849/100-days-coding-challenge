// Count Length of String Program in C

#include<stdio.h>
#include<conio.h>

void main()
 {
  int i,count=0;
  char ch[20];
  clrscr();
  printf("Enter Any string: ");
  gets(ch);
  for(i=0;ch[i]!='\0';i++)
  {
  count++;
  }
  printf("Length of String: %d",count);
  getch();
 }