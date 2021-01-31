class Stack:
 def __init__(self):
    self.list1=[]
    
 def push(self,element):
     self.list1.append(element)
     
 def pop(self):
     if not self.list1==[]:  # For popping there must be an element in the list 
      return self.list1.pop()
 
 def peek(self):  # Top most element in the list
     if not self.list1==[]:
      return self.list1[-1]
  
# Returns True(1) if the stack is Empty// Returns False(0) if the stack is not empty
 def Is_Empty(self):  
     if self.list1==[]: return 1
     else : return 0
     
 def Display(self):
   print("The Stack is : ",self.list1)

# Main method

def Matching(p1,p2):
    if   p1=="{" and p2=="}": 
        return True
    elif p1=="[" and p2=="]": 
        return True 
    elif p1=="(" and p2==")": 
        return True
    else: 
        return False

def is_Balanced(string):
  obj1=Stack()
  is_Balanced = True
  index=0
  
  while index<len(string) and is_Balanced:
     t  =string[index]
     if t in "{[(":
        obj1.push(t)
     else:
         if obj1.Is_Empty(): 
            is_Balanced=False
         else:
           top=obj1.pop()
           if not Matching(top,t):  
             is_Balanced=False
     index+=1
  
  if obj1.Is_Empty() and is_Balanced:
      return True
  else: 
      return False

 
           
string="{2()+}"
print(is_Balanced(string))

