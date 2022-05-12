// Write a program to check whether the given number is perfect number or not.

// Note
// A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself

// For Example
// Divisors of 6 are 1, 2 and 3. The sum of these divisors is 6. So the number 6 is called as perfect number.

// Input Format
// Input contains n

// Output Format
// Print the number is a perfect number, if the number is perfect else print the number is not a perfect number

// Constraints 
// 1<=n<=10^5

# include <stdio.h>   

int main()   
{   
 int i, Number, Sum = 0 ;   
  
 scanf("%d", &Number) ;   
 
 for(i = 1 ; i < Number ; i++)   
  {   
   if(Number % i == 0)   
     Sum = Sum + i ;   
  }    

 if (Sum == Number)   
    printf("%d is a perfect number", Number) ;   
 else   
    printf("%d is not a perfect number", Number) ;   

return 0 ;   
}