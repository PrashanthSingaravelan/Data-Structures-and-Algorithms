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
# Linked List stops
            
    def Insert(self,index,element):
        qtr = None
        ptr = self.head
        t=Node(element)
        if index is 0:
           t.next=self.head
           t=self.head
        else:
            for i in range(index):
                qtr = ptr
                ptr = ptr.next
            t.next   = ptr
            qtr.next = t
    
    def Display(self):
      print("Iterative Display : ")
      ptr=self.head
      while ptr:
         print(ptr.data,end=" ")
         ptr=ptr.next
      

list1=[90,89,70,23,78,90,21]

obj1=LinkedList(list1)
obj1.Append(list1)

print("Before Inserting")
obj1.Display()

print("  ")
print("After Inserting")
obj1.Insert(7,100)
obj1.Display()