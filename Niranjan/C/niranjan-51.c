// Write a program to generate ASCII value of Digits from a given range.

// Input Format:

// Input contains ASCII value of a Digit.

//  48<=input<=57

// Output Format:

// Print ASCII characters from that range with space separated

#include<stdio.h>
#include<ctype.h>
#include<conio.h>

int main(void)
{
   int number, result;
   number = getch();
   result = toascii(number);
   printf("\nAscii value of  %c is %d\n", number, result);
   getch();
}