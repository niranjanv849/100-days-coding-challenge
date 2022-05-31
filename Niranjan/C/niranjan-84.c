// Write C program to find diameter, circumference and area of circle using function
#include <stdio.h>
#include <math.h>
 
//All Function declaration
double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);
 
 
int main()
{
    float radius, diameter, circle, area;
 
    // Inputting radius of circle from user
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
 
    diameter  = getDiameter(radius);       // Calling getDiameter function
    circle = getCircumference(radius);  // Calling getCircumference function
    area = getArea(radius);           // Calling getArea function
 
    printf("Diameter of the circle = %.2f units\n", diameter);
    printf("Circumference of the circle = %.2f units\n", circle);
    printf("Area of the circle = %.2f sq. units", area);
 
    return 0;
}
 
// Calculating diameter of circle whose radius is given
 
double getDiameter(double radius)
{
    return (2 * radius);
}
 
 
//Calculating circumference of circle whose radius is given
 
double getCircumference(double radius)
{
    return (2 * M_PI * radius); // PI = 3.14
}
 
//Finding area of circle whose radius is given
 
double getArea(double radius)
{
    return (M_PI * radius * radius); // PI = 3.14
}