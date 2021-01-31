class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self,list1):
        self.head = None
        self.head=Node(list1[0])
        self.ptr=self.head    # For Accessing from the Head Node
    
    def Append(self,list1):
      last=Node(None)
      last=self.head
      
      
      for i in range(1,len(list1),1):
       t         = Node(list1[i])
       last.next = t
       last      = t
    
       
    def RecursiveDisplay(self,self.ptr):
       if self.ptr:
        print(self.ptr.data)
        RecursiveDisplay(self,self.ptr.next)
     
     
    
list1=[90,89,76,23,43]

obj1=LinkedList(list1)
obj1.Append(list1)

obj1.RecursiveDisplay(head)


