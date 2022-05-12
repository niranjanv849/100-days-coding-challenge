// program addition of two matrix


#include<stdio.h>
#include<conio.h>

void main()
{
int x[3][3],y[3][3],z[3][3],i,j;
printf("ENTER ELEMENTS OF 1st MATRIX\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&x[i][j]);
}
printf("ENTER ELEMENTS OF 2nd MATRIX\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&y[i][j]);
}
printf("MATRIX [X]");
for(i=0;i<3;i++)
{
printf("\n\n");
for(j=0;j<3;j++)
printf(" %d",x[i][j]);
}
printf("\nMATRIX [Y]");
for(i=0;i<3;i++)
{
printf("\n\n");
for(j=0;j<3;j++)
printf(" %d",y[i][j]);
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
z[i][j]=x[i][j]+y[i][j];
}
printf("\nMATRIX [Z]");
for(i=0;i<3;i++)
{
printf("\n\n");
for(j=0;j<3;j++)
printf(" %d",z[i][j]);
}
}