class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

# Creation of Linked List starts
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
# Creation of Linked List stops

# Delete function    
    def Delete(self,element):
        ptr = self.head
        qtr = None
        
        while ptr:
            if ptr.data is not element:
             qtr = ptr
             ptr = ptr.next
            else:
              if ptr.data is self.head.data:
                self.head = self.head.next
                return ptr.data
              else:  
                qtr.next = ptr.next
                x = ptr.data
                del ptr
                return x
        
    def Display(self):
      ptr=self.head
      while ptr:
         print(ptr.data,end=" ")
         ptr=ptr.next

list1=[23,34,45,67,21]
obj1=LinkedList(list1)
obj1.Append(list1)

print("Before Deleting : ")
obj1.Display()
obj1.Delete(21)

print()
print("After Deleting : ")
obj1.Display()