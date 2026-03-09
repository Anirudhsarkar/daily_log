mar1 = int(input())
mar2 = int(input())
mar3 = int(input())
mar4 = int(input())
mar5 = int(input())
total = mar1 + mar2 + mar3 + mar4 + mar5
percent = total / 5
print("Percentage =", percent)
if percent >= 90:
    print("Grade: A")
elif percent >= 75:
    print("Grade: B")
elif percent >= 60:
    print("Grade: C")
elif percent >= 40:
    print("Grade: D")
else:
    print("Grade: Fail")