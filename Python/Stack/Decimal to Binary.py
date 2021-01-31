class Stack:
    def __init__(self):
        self.list1=[]
    def Push(self,element):
        self.list1.append(element)
    def Pop(self):
        return self.list1.pop()
    def Display(self):
        print(self.list1)
    
# Class ends over here

def Dec_to_Bin(n):
    if(n>0):
        remainder=n%2
        obj1.Push(remainder)
        Dec_to_Bin(n//2)
        
# Main Function
        
n=int(input("Enter the Decimal Number : "))
obj1=Stack()
Dec_to_Bin(n)

print("Equivalent Binary form : ")
for i in range(len(obj1.list1)):
    print(obj1.Pop())
