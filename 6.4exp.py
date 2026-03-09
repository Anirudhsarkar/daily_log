#Write a recursive function to print Fibonacci series upto n terms.
def faco ( n,a=0 ,b=1 ):
    
    if n<= 0:
        return 
    print(a,end=" ")
    for i in n :
        return faco(n-1 ,b,a+b)




print(faco(5))   