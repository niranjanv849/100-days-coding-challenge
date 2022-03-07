#Swap two values entered by the user without a temporary variable.
a=int(input())
b=int(input())

a,b=b,a
print(a,b)


#Convert the given temperature from Fahrenheit to Celsius and vice versa.
Fahrenheit = int(input())  
Celsius = int(input())  

Celsius = ((Fahrenheit-32)*5)/9  
Fahrenheit = (Celsius * 9/5) + 32
print(Celsius);
print(Fahrenheit)  

#Find the quotient and remainder when two given numbers are divided.
a = int(input())
b = int(input())
quotient = a/b
remainder = a%b

print(quotient)
print(remainder)

#Find the largest of three numbers
n1 = int(input())
n2 = int(input())
n3 = int(input())

max = (n1 if (n1 > n2 and n1 > n3) else (n2 if (n2 > n1 and n2 > n3) else n3))
print(max)