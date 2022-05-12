// C Program to Find Sum of Diagonal Elements of Matrix

#include<stdio.h>
#include<conio.h>

void main()
{

   int i, j, matrix[10][10], row, col;
   int sum = 0;

   printf("\nEnter the number of Rows : ");
   scanf("%d", &row);
 
   printf("\nEnter the number of Columns : ");
   scanf("%d", &col);
 
   //Accept the Elements in m x n Matrix
   for (i = 0; i < row; i++) 
   {
      for (j = 0; j < col; j++) 
	  {
         printf("\nEnter the Element a[%d][%d] : ", i, j);
         scanf("%d", &matrix[i][j]);
      }
   }
 
  //Addition of all Diagonal Elements
  for (i = 0; i < row; i++) 
  {
   for (j = 0; j < col; j++) 
    {
     if (i == j)
     sum = sum + matrix[i][j];
    }
   }
 
   //Print out the Result
   printf("\nSum of Diagonal Elements in Matrix is: %d", sum);
}