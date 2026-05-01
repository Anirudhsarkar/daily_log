class Parent():
    def show(self):
        print("parent")
    
    

class child(Parent):
    def display(self):
        print("child")
    


s1 = child()
s1.display(-9)