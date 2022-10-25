    
num = int(input("Enter a number: "))
factorial = 1
if num < 0:
    print("Factorial does not exist for Negative Number")
elif num == 0:
    print("Factorial of 0 is 1")
else:
    for i in range(1, num + 1):
        factorial = factorial * i
        print(i,"*", end=" ")
        # print("Factorial of n is" ))
    
    print("/n")
    print("The Factorial of given number ", num, "is", factorial)
    

