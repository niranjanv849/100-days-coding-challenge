//Write a program that accepts two item’s weight (floating values ) and number of purchase and calculate the average value of the items.
#include<stdio.h>
int main(){
    float weight1,weight2,noofitem1,noofitem2;
    float average;
    scanf("%f %f\n %f %f",&weight1,&noofitem1,&weight2,&noofitem2);
    average = ((weight1 * noofitem1) + (weight2 * noofitem2)) / (noofitem1 + noofitem2);
    printf("Average weight of the items : %.3f",average);
    return 0;
}

//Write a program to find the sum of N numbers without using loop
#include<stdio.h>
int main(){
    long N,SumOfNumbers;
    scanf("%ld",&N);
    // SumOfNumbers = 1;
    SumOfNumbers = N*(N+1)/2;
    printf("Sum of first %ld numbers is %ld",N,SumOfNumbers);
    return 0;
}

//Write a program to accept two floating-point values and add the decimal places alone
#include<stdio.h>
int main(){
    double a,b,SumOfNumbers;
    int N;
    scanf("%lf %lf",&a,&b);
    N = a;
    a = a - N;

    N = b;
    b = b - N;
    
    SumOfNumbers = a+b;
    printf("%.2lf + %.2lf = %.2lf",a,b,SumOfNumbers);
    return 0;
}


//Given an integer N, print the number of days in the Nth month of the year using Switch.

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    switch(N){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("31 Days");break;
        case 2:printf("28 Days");break;
        case 4:
        case 6:
        case 9:
        case 11:printf("30 Days");break;
        default:printf("Invalid input!");
    }
    return 0;
}

//