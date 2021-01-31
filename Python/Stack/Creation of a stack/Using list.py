class Stack:

 def __init__(self):
    self.list1=[]
    
 def push(self,element):
     self.list1.append(element)
     
 def pop(self):
     if not self.list1==[]:  # For popping there must be an element in the list 
      print("Popped out element : ") 
      print(self.list1.pop())
 
 def peek(self):  # Top most element in the list
     if not self.list1==[]:
         print("Peek element is : ")
         print(self.list1[-1])
     
 def display(self):
     print("Stack elements : ")
     return self.list1
 
obj=Stack()
obj.push("Hello")
obj.push(23)
print(obj.display()) 

obj.peek()

obj.pop()
print(obj.display())

    
