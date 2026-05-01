total =0 
with open("city.txt") as f:
    for line in f :
       name, area , pop = f.split()
       print(area,name,pop) 

       if float(pop) >10:
           print(name)

    total = area +total   
print(total)


      