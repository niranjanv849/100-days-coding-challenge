// Chef wants to reach home as soon as possible. He has two options:

// Travel with his BIKE which takes X minutes.
// Travel with his CAR which takes Y minutes.
// Which of the two options is faster or do they both take same time?

// Input Format
// First line will contain T, number of test cases. Then the test cases follow.
// Each test case contains a single line of input, two integers X,Y representing the time taken to travel with BIKE and CAR respectively.
// Output Format
// For each test case, print CAR if travelling with Car is faster, BIKE if travelling with Bike is faster, SAME if they both take the same time.

// You may print each character of CAR, BIKE and SAME in uppercase or lowercase (for example, CAR, Car, cAr will be considered identical).

// Constraints
// 1≤T≤100
// 1≤X,Y≤10
// Sample Input 1 
// 3
// 1 5
// 4 2
// 6 6
// Sample Output 1 
// BIKE
// CAR
// SAME
// Explanation
// Test case-1: Travelling with BIKE takes 1 minute while travelling with CAR takes 5 minutes. So travelling with BIKE is faster.

// Test case-2: Travelling with BIKE takes 4 minutes while travelling with CAR takes 2 minutes. So travelling with CAR is faster.

// Test case-3: Travelling with both BIKE and CAR takes the SAME time i.e. 6 minutes.

#include <stdio.h>

int main() {
  int b,c,n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
      scanf("%d %d",&b,&c);
      if(b<c)
      {
          printf("BIKE\n");
      }
      else if(b>c)
      {
          printf("CAR\n");
      }
      else if(b==c)
      {
          printf("SAME\n");
      }
  }
  
  return 0;
}