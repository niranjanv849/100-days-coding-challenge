// Write a program to print the smallest and second largest Factor of a given number.

 

// Input Format:

// Given two integers in range
// 1<= input<= 10^15

 

// Output Format:
// Print smallest and Second largest Factor.

//second largest factor without using array 👇
int factor (int num) {
    int result = 0;
    for (int i = 1; i < num/2; i++) {   
        if (num % i == 0) {
            result = i;
        }
    }
    return result;
}