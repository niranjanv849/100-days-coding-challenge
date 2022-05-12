// C Program to Transpose Matrix

#include<stdio.h>
#include<conio.h>

void main()
{
  int a[10][10],b[10][10],i,j;
  printf("\nEnter the elements of matrix: ");
  for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
{
  scanf("%d",&a[i][j]);
}
}
  printf("\nThe Transpose of matrix is:\n");
  for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
{
  b[i][j]=a[j][i];
  printf("\t%d\t",b[i][j]);
}
  printf("\n");
}
}