class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

# Creation of Linked List starts
class LinkedList:
    def __init__(self,list1):
        self.head=Node(list1[0])
    
    def Append(self,list1):
      last=Node(None)
      last=self.head
      
      for i in range(1,len(list1),1):
         t         = Node(list1[i])
         last.next = t
         last      = t               
# Creation of Linked List stops

    def Display(self):
     ptr=self.head
     while ptr!=None:
      print(ptr.data,end=" ")
      ptr = ptr.next

# Concatenating Two Linked List 
def Concatenate():
    first  = obj1.head
    second = obj2.head
    while first.next!=None:
      first = first.next
    first.next=second

list1=[23,34,45,67,100]
obj1=LinkedList(list1)
obj1.Append(list1)

list2=[66,89,43,21,99]
obj2=LinkedList(list2)
obj2.Append(list2)

obj1.Display()
print()
obj2.Display()
print()

Concatenate()

obj1.Display()


