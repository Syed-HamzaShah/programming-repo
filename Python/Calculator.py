print("Welcome to Calculator")
print("You can perform your basic Math operations here")
print("Enter first number")
x = int(input())
print("Enter second number")
y = int(input())
print("Enter your choice")
print("1 = Add")
print("2 = Sub")
print("3 = Multiplication") 
print("4 = Division")
z = int(input())

if z == 1:
    print("Addition is")
    print(x+y)
elif z == 2:
    print("Minus is")
    print(x-y)
elif z == 3:
    print("Multiplication is")
    print(x*y)
elif z == 4:
    if y == 0:
        print("Division not possible")
    else:
        print("Divison is")
        print(x/y)
else:
    print("Invalid Choice")
    