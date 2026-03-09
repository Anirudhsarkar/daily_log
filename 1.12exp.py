a = [0,1]
b = [0,1]
print("A B A&B A|B A^B")
for i in a:
    for j in b:
        print(i, j, i & j, i | j, i ^ j)
