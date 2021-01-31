class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self,list1):
        self.head = None
        self.head=Node(list1[0])
    
    def Append(self,list1):
      last=Node(None)
      last=self.head
      
      for i in range(1,len(list1),1):
       t         = Node(list1[i])
       last.next = t
       last      = t
       
    def Display(self):
     print("Iterative Display : ")
     ptr=self.head
     while ptr:
         print(ptr.data)    
         ptr=ptr.next
    
    def Insert(self,element,position):
        ptr = self.head
        for i in range(position-1):
            ptr = ptr.next
        t        = Node(element)    
        t.next   = ptr.next
        ptr.next = t
        
list1=[90,89,76,23,43]

obj1=LinkedList(list1)
obj1.Append(list1)

obj1.Insert(100,2)

obj1.Display()

