#Write a Python function that takes a positive integer and returns the sum of the
#cube of all the positive integers smaller than the specified number.

def cube(n):
    total = 0 
    for i in range (1,n):
        total = total + i ** 3
    return total
   


print(cube(8))

