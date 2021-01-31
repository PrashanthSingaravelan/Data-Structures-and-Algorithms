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

# After Searching that particular element iw will come to first,
# It is easy for the second time search
    
    def Search(self,key):
        ptr=self.head
        qtr=None
        
        while ptr:
         if ptr.data is key:
             qtr.next  = ptr.next
             ptr.next  = self.head
             self.head = ptr
             return ptr.data
         
         else:
             qtr=ptr
             ptr=ptr.next
# Search ends over here
       
    def Display(self):
     print("Iterative Display : ")
     ptr=self.head
     while ptr:
         print(ptr.data)
         ptr=ptr.next

list1=[90,89,70,23,78,90,21]

obj1=LinkedList(list1)
obj1.Append(list1)

print(obj1.Search(76))
obj1.Display()