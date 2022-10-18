def sumOfThree(x, y, z):
    sum = x + y + z
    
    if x == y == z:
        sum = sum * 3
    return sum

print(sumOfThree(1,2,3))
print(sumOfThree(3,3,3))
