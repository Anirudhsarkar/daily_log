#Write a Python function to find the maximum and minimum numbers from a sequence of numbers 




def max_min(list):
    max_no = list[0]
    min_no = list[0]
    for i in list :
        if max_no<i:
            max_no = i

        if min_no>i:
            min_no = i

    return min_no  , max_no     

    
    



list = [1,2,3,4,5,6]
print(max_min(list))
         
