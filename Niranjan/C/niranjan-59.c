// Insert an Element in Array at Specific Position Program in C

#include<stdio.h>
#include<conio.h>

 void main()
  {
  int i,a[5],no,pos;
  printf("Enter data in array: ");
  for(i=0;i<5;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("\n\nStored Data in array: ");
  for(i=0;i<5;i++)
  {
  printf("  %d",a[i]);
  }
  printf("\n\nEnter possition number: ");
  scanf("%d",&pos);
  if(pos>5)
  {
  printf("\n\nThis is out of range");
  }
  else
  {
  printf("\n\nEnter new number = ");
  scanf("%d",&no);
  --pos;
  for(i=5;i>=pos;i--)
  {
  a[i+1]=a[i];
  }
  a[pos]=no;
  printf("\n\nNew data in array: ");
  for(i=0;i<6;i++)
  {
  printf("  %d",a[i]);
  }
  }
  }