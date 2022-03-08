# Write a program to check whether a year entered by the user is a leap year. 

year=int(input("Enter year to be checked:"))
if(year%4==0 and year%100!=0 or year%400==0):
    print("The year is a leap year!")
else:
    print("The year isn't a leap year!")

#  Write a program to find the leap years between the range 2000 to 2020.

print ("Print leap year between two given years")
print ("Enter start year")
startYear = int(input())
print ("Enter last year")
endYear = int(input())
 
print ("List of leap years:")
for year in range(startYear, endYear):
  if (0 == year % 4) and (0 != year % 100) or (0 == year % 400):
    print (year)