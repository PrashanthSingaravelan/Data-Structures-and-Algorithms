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
   
    def Reverse(self):
     p = self.head
     q = None
     r = None
     while p:
         r=q
         q=p
         p=p.next
         q.next=r
     self.head=q 
     
    def Display(self):
         ptr=self.head
         while ptr:
             print(ptr.data,end=" ")
             ptr = ptr.next

list1=[23,34,45,67,100]
obj1=LinkedList(list1)
obj1.Append(list1)

print("Before Reversing : ",end="")
obj1.Display()

obj1.Reverse()

print()
print("After Reversing  : ",end="")
obj1.Display()