a = int(input("Enter first no: "))
b = int(input("Enter second no: "))
c = int(input("Enter third no: "))
if a > b and a > c:
    print("Greatest number is:", a)
elif b > a and b > c:
    print("Greatest number is:", b)
else:
    print("Greatest number is:", c)
