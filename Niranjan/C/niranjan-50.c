// Write a program to check whether the given number is perfect cube or not.

 

// Input Format:

// The Input contains n

//  1<=n<=10^5

// Output Format:

// Print Yes or No

#include <math.h>
#include <stdio.h>
  
// Function to check if a number is
// a perfect Cube
void perfectCube(int N)
{
    for (int i = 1; i < N; i++) {
  
        // If cube of i is equals to N
        // then print Yes and return
        if (i * i * i == N) {
            printf("Yes");
            return;
        }
    }
  
    // No number was found whose cube
    // is equal to N
    printf("No");
    return;
}
  
// Driver Code
int main()
{
    // Given Number
    int N;
    scanf("%d",&N);
  
    // Function Call
    perfectCube(N);
    return 0;
}