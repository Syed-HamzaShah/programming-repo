import math
def a(a, b):
    result= a+b                                           #Addition
    return result
def b(a, b):
    result = a-b                                          #Subtarction
    return result
def c(a ,b):
    result = a*b                                         #Multipication
    return result
def d(a,b):
    if b == 0:
        print("Division by Zero is not Possible")
    else:
        print("Ans =", a/b)                             #Divsion
def e(a):
    result = a*a                                        #Square
    return result
def f(a):
    result = (a -32) * (5//9)                            #Fahrenheit to Celsuis
    return result
def g(a):
    result = (a * (9//5)) +32                             #Celsuis to Fahrenheit
    return result
def h(a ,b):
    result = a**b                                        #Exponential
    return result
def i(a):
    return math.cos(a)                                   #Cos
def j(a):
    return math.sin(a)                                   #Sin
def k(a):
    return math.tan(a)                                    #Tan
def l(a):
    return math.factorial(a)                               #Factorial

while True:
    print("Welcome To Advance Calculator")
    print("Enter Your Desired Operation")
    print("1 = Add")
    print("2 = Sub")
    print("3 = Mult")
    print("4 = Div")
    print("5 = Square")
    print("6 = Fahrenheit to Celsuis")
    print("7 = Celsuis to Fahrenheit")
    print("8 = Exponential")
    print("9 = Cos of a number (Radian")
    print("10 = Sin of a number (Radian")
    print("11 = Tan of a number (Radian)")
    print("12 = Factorial")
    print("13 = Exit")
    choice = int(input())
    if choice == 1:
        print("Enter First Numbers")
        x = int(input())
        print("Enter Second Number")
        y = int(input())
        result = a(x,y)
        print("Ans = ",result)
    elif choice == 2:
        print("Enter First Number")
        x = int(input())
        print("Enter Second Number")
        y = int(input())
        result = b(x, y)
        print("Ans =",result)
    elif choice == 3:
        print("Enter First Number")
        x = int(input())
        print("Enter Second Number")
        y = int(input())
        result = c(x,y)
        print("Ans =",result)
    elif choice == 4:
        print("Enter First Number")
        x = int(input())
        print("Enter Second Number")
        y = int(input())
        d(x,y)
    elif choice == 5:
        print("Enter Number")
        x = int(input())
        result = e(x)
        print("Ans =",result)
    elif choice == 6:
        print("Enter Temprature in Fahrenheit")
        x = int(input())
        result = f(x)
        print("Ans =",result)
    elif choice == 7:
        print("Enter Temprature in Celsuis")
        x = int(input())
        result = g(x)
        print("Ans =",result)
    elif choice == 8:
        print("Enter the Number you want to find Exponential")
        x = int(input())
        print("Enter the Power of number")
        y = int(input())
        result = h(x,y)
        print("Ans =",result)
    elif choice == 9:
        print("Cos of")
        x = int(input())
        result = i(x)
        print("Ans =",result)
    elif choice == 10:
        print("Sin of")
        x = int(input())
        result = j(x)
        print("Ans =",result)
    elif choice == 11:
        print("Tan of")
        x = int(input())
        result = k(x)
        print("Ans =",result)
    elif choice == 11:
        print("Factorial of")
        x = int(input())
        result = l(x)
        print("Ans =",result)
    else:
        print("Invalid Option")
