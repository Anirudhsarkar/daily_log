sec = float(input("Enter the number"))
min = (sec%3600)//60
hour = sec//3600
sec2 = sec%60
print(hour)
print(min)
print(sec2)