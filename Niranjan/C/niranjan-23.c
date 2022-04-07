// Given a table number and the range print the multiplication table

 #include<stdio.h>
 int main()
 {
     int num,temp,range;
     scanf("%d %d",&num,&range);
     for(int ind=1;ind<=range;ind++)
    {       temp = num*ind;
            printf("%d X %d = %d\n",ind,num,temp);
    }
    
 }