// Convert the number of days entered by the user  in terms of years, weeks and days.

#include <stdio.h>
int main()
{
    int days, years, weeks;
    printf("Enter days: ");
    scanf("%d", &days);
    years = (days / 365);
    weeks = (days % 365) / 7;
    days  = (days % 365) %7;
    printf("YEARS: %d\n", years);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d", days);
    return 0;
}

// Convert the number of days entered by the user  in terms of years, months, weeks and days.

#include<stdio.h>
int main()
{
   int days, years, weeks, months;
   printf("Enter Days:");
   scanf("%d",&days);
   years=days/365;
   weeks=days/7;
   months=days/30;
   days  = (days % 365) %7;
   printf("Days to years %d",years);
   printf("\nDays to weeks %d",weeks);
   printf("\nDays to months %d",months);
   printf("\nDAYS: %d", days);
}