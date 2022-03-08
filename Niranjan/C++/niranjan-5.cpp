// Convert the number of days entered by the user  in terms of years, weeks and days.

#include <bits/stdc++.h>
using namespace std;
 
#define DAYS_IN_WEEK 7
 
// Function to find year,
// week, days
void find(int number_of_days)
{
    int year, week, days;
     
    // Assume that years is
    // of 365 days
    year = number_of_days / 365;
    week = (number_of_days % 365) /
            DAYS_IN_WEEK;
    days = (number_of_days % 365) %
            DAYS_IN_WEEK;
             
    cout << "years = " << year;
    cout << "\nweeks = " << week;
    cout << "\ndays =  " << days;   
}
 
// Driver Code
int main()
{
    int number_of_days ;
    cin>>number_of_days;
    find(number_of_days);
    return 0;
}
 
// Convert the number of days entered by the user  in terms of years, months, weeks and days.

#include<iostream>

using namespace std;
int main()
{
   int tot, days, weeks, months, years;
   cout<<"Enter Total Number of Days: ";
   cin>>tot;
   years = tot/365;
   months = (tot%365)/30;
   weeks = ((tot%365)%30)/7;
   days = ((tot%365)%30)%7;

   cout<<"\nYears: "<<years<<endl;
   cout<<"Months: "<<months<<endl;
   cout<<"Weeks: "<<weeks<<endl;
   cout<<"Days: "<<days<<endl;
   cout<<endl;
   return 0;
}