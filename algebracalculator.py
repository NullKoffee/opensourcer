from math import sqrt
# define functions
def add(x, y):
   """This function adds two numbers"""
   return x + y

def subtract(x, y):
   """This function subtracts two numbers"""
   return x - y

def multiply(x, y):
   """This function multiplies two numbers"""
   return x * y

def divide(x, y):
   """This function divides two numbers"""
   return x / y


# take input from the user
print("Select operation.")
print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")
print("5.Quadratic")
print("6.Standard Deviation")
print("7.Residuals")
print("8.Exponents")
print("9.Decimals")
choice = input("Enter choice(1/2/3/4/5/6/7/8/9):")

if choice == '1':
   num1 = int(input("Enter first number: "))
   num2 = int(input("Enter second number: "))
   print(num1,"+",num2,"=", add(num1,num2))

   
elif choice == '2':
   num1 = int(input("Enter first number: "))
   num2 = int(input("Enter second number: "))
   print(num1,"-",num2,"=", subtract(num1,num2))

elif choice == '3':
   num1 = int(input("Enter first number: "))
   num2 = int(input("Enter second number: "))
   print(num1,"*",num2,"=", multiply(num1,num2))

   
elif choice == '4':
   num1 = int(input("Enter first number: "))
   num2 = int(input("Enter second number: "))
   print(num1,"/",num2,"=", divide(num1,num2))

   
elif choice == '5':
    a = int(input("Enter in A:"))
    b = int(input("Enter in B:"))
    c = int(input("Enter in C:"))
    x1 = -b + sqrt(b * b - 4 * a * c)
    x2 = -b - sqrt(b * b -4 * a * c)
    X1 =  x1 / 2 * a
    X2 = x2 / 2 * a
    print("X1 is %d and X2 is %d" %(X1, X2))

elif choice == '6':
    ls = []
    length = int(input("Enter in the number of data in the list:"))
    while len(ls) < length:
        data = int(input("Enter in a number:"))
        ls.append(data)
        print(ls)
    average = (sum(ls) / len(ls))
    print("Average is %d" % (average))
    for data in ls:
        var = average - data
        print(var)
    for data in ls:
        var = var * var
        print("Squared is %d" % (var))
    rd = sum(ls)
    var2 = data - 1
    variance = rd / var2
    print("Print variance is %d" % (variance))
    
    standardev = sqrt(variance)
    print("Standard Deviation is %d" % (standardev))
    
elif choice == '7':
    observable = int(input("Enter in the observable y coordinate: "))
    predicted = int(input("Enter in the predicted y coordinate: "))
    residual = observable - predicted
    print("The residual is %d" % (residual))
    
    
elif choice == '8':
    print("Select Operation(1.Addition 2.Subtraction 3.Multiplacation 4.Division)")
    expchoice = input("Enter: ")
    
    
    if expchoice == '1':
        ex1 = int(input("Enter in the base:"))
        ex2 = int(input("Enter in the exponent:"))
        ex3 = int(input("Enter in the second base:"))
        ex4 = int(input("Enter in the second exponent:"))
        expadd = pow(ex1,ex2) + pow(ex3,ex4)
        print(expadd)
        
    elif expchoice == '2':
        ex1 = int(input("Enter in the base:"))
        ex2 = int(input("Enter in the exponent:"))
        ex3 = int(input("Enter in the second base:"))
        ex4 = int(input("Enter in the second exponent:"))
        expsub = pow(ex1,ex2) - pow(ex3,ex4)
        print(expsub)
        
    elif expchoice == '3':
        ex1 = int(input("Enter in the base:"))
        ex2 = int(input("Enter in the exponent:"))
        ex3 = int(input("Enter in the second base:"))
        ex4 = int(input("Enter in the second exponent:"))
        expmult = pow(ex1,ex2) * pow(ex3,ex4)
        print(expmult)
        
    elif expchoice == '4':
        ex1 = int(input("Enter in the base:"))
        ex2 = int(input("Enter in the exponent:"))
        ex3 = int(input("Enter in the second base:"))
        ex4 = int(input("Enter in the second exponent:"))
        expdivi = pow(ex1,ex2) / pow(ex3,ex4)
        print(expdivi)
        
    
        
    else:
        print("ERROR")
    
elif choice == '9':
    choice = input('Enter choice(1.Addition 2.Subtraction 3.Multiplacation 4.Division): ')


    dec1 = float(input('Enter first decimal: '))
    dec2 = float(input('Enter second decimal: '))
    if choice == '1':
       print(dec1,"+",dec2,"=", add(dec1,dec2))

    elif choice == '2':
       print(dec1,"-",dec2,"=", subtract(dec1,dec2))

    elif choice == '3':
       print(dec1,"*",dec2,"=", multiply(dec1,dec2))

    elif choice == '4':
       print(dec1,"/",dec2,"=", divide(dec1,dec2))
       
       
    else:
       print("ERROR")
    
    
else:
    print("Invalid Input")

