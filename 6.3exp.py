#Write a Python function to print 1 to n using recursion. (Note: Do not use loop)
def printn(n):
    if n == 0:
        return
    printn(n - 1)
    print(n)


printn(5)