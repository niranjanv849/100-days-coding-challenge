//Write a program to print the given time in the HH:MM:SS format
#include<stdio.h>
int main(){
    int hh,mm,ss;
    scanf("%d:%d:%d",&hh,&mm,&ss);
    printf("%02d:%02d:%02d",hh,mm,ss);
return 0;
}

//Write a program to print the given date in the DD/MM/YYYY format
#include<stdio.h>
int main(){
    int dd,mm,yy;
    scanf("%d/%d/%d",&dd,&mm,&yy);
    printf("%02d/%02d/%04d",dd,mm,yy);
return 0;
}

//Write a program to accept two numbers and print them in the following format
#include<stdio.h>
int main(){
    unsigned long num1,num2;
    scanf("%ld %ld",&num1,&num2);
    printf("Number1 = %ld\nNumber2 = %ld",num1,num2);
return 0;
}

//Write a program to accept a value and left justify with 15 columns
#include<stdio.h>
int main(){
    unsigned long num1;
    scanf("%ld",&num1);
    printf("%-15ld",num1);
return 0;
}

//Write a program to accept values using all types of identifiers and print them accordingly.
#include<stdio.h>
int main(){
    char a;
    int b;
    unsigned int c;
    long d;
    float e;
    scanf("%c\n%d\n%u\n%ld\n%f",&a,&b,&c,&d,&e);
    printf("%c\n%d\n%u\n%ld\n%.3f",a,b,c,d,e);
return 0;
}

//Write a program to print all the listed escape sequence

#include<stdio.h>
int main(){
    printf("\\a - alarm\n");
    printf("\\b - backspace\n");
    printf("\\r - carriage return\n");
    printf("\\n - new line\n");
    printf("\\t - horizontal tab\n");
    printf("\\v - vertical tab\n");
    printf("\\\\ - backslash\n");
    printf("\' - single quote\n");
    printf("\" - double quote");
return 0;
}

//Write a program to accept the two integers relate them in the order <, >, <=, >=, !=, == and print the output.
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d < %d is %d\n",a,b,a < b);
    printf("%d > %d is %d\n",a,b,a > b);
    printf("%d <= %d is %d\n",a,b,a <= b);
    printf("%d >= %d is %d\n",a,b,a >= b);
    printf("%d != %d is %d\n",a,b,a != b);
    printf("%d == %d is %d",a,b,a == b);

    return 0;
}

//Write a program to accept an integer and perform post-increment in the printf

#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",a++);
    return 0;
}

//Write a program to calculate the Simple Interest

#include<stdio.h>
int main(){
    int P,N,R;
    scanf("%d %d %d",&P, &N, &R);
    printf("%d",(P*N*R)/100);
    return 0;
}

//Write a program to convert the height of a person from feet to centimeters
#include<stdio.h>
int main(){
    float feet;
    scanf("%f",&feet);
    printf("%.3f",feet*30.48);
    return 0;
}

//Write a program to accept an integer value and perform pre-increment in printf
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",++a);
    return 0;
}

//Write a program to convert the distance from meter to centimeter
#include<stdio.h>  
int main()   
{  
float meter;  
float centimeter;
scanf("%f",&meter);
centimeter = 100 * meter;  
printf ("%.f", centimeter);   
return 0;  
}  

//Write a program to convert the temperature from celsius to farenheit
#include<stdio.h>  
int main()   
{  
float celsius;  
float fahrenheit;
scanf("%f",&celsius);
fahrenheit = celsius * 1.8 + 32;  
printf ("%.3f", fahrenheit);   
return 0;  
}  

