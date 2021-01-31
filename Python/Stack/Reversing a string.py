# Class starts here
class Stack:
    def __init__(self):
        self.list1=[]
    
    def Push(self,element):
        self.list1.append(element)
    
    def Pop(self):
        print(self.list1.pop())
    
    def Display(self):
        print(*self.list1)
        
## Class ends over here

def Reverse(obj1,string):
    for i in range(len(string)-1,-1,-1):
        obj1.Push(string[i])
       
        
# Main function
string=input("Enter the string : ")
obj1=Stack()

Reverse(obj1,string)

print("The Reverse of the String : ")
obj1.Display()