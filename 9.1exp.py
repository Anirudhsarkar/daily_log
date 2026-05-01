class Multiplication:
    def multiply(self,*args):
        result =1
        for num in args :
            result*=num
        return result
    
obj1 =  Multiplication()
print(obj1.multiply(1,2,3,4,5,63,2,1))