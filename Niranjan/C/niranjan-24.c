// Write a program to generate the multiplication table with the given integer upto 10.

 #include<stdio.h>
 int main()
 {
     int num,temp;
     scanf("%d",&num);
     for(int ind=1;ind<=10;ind++)
    {       temp = num*ind;
            printf("%d X %d = %d\n",ind,num,temp);
    }
    
 }