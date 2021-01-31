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

    def Display(self):
     ptr=self.head
     while ptr!=None:
      print(ptr.data,end=" ")
      ptr = ptr.next

# Concatenating Two Linked List 
def Merging():
    ptr  = obj1.head
    qtr  = obj2.head
    
    t = None    # For Holding the Head Node
    last=None   # For Traversing the Linked List
    
# For the first Node
    if ptr.data < qtr.data:
        last = t = ptr
        ptr  = ptr.next
    else:
        last = t = qtr
        qtr  = qtr.next
        
# For the Rest of the Nodes    
    while ptr and qtr !=None:   # If ptr/qtr anyone reaches NULL stop it
        if ptr.data < qtr.data:
            last.next = ptr
            last      = ptr
            ptr       = ptr.next
            last.next = None
        else:
            last.next = qtr
            last      = qtr
            qtr       = qtr.next
            last.next = None
     
    if ptr : last.next = ptr
    else:    last.next = qtr
    obj2.head = t            # Atlast make head node to point on t
    
# After all the traversals, one node will be left without 
# any connection either it will in 1st list or in the 2nd list.
# It may be in any list No matter. Point last->next =first or second.

list1=[23,34,45,67,100]  # List1 should be in a sorted form
list1.sort()
obj1=LinkedList(list1)
obj1.Append(list1)

list2=[66,89,43,21,99]
list2.sort()
obj2=LinkedList(list2)
obj2.Append(list2)

obj1.Display()
print()
obj2.Display()
print()

Merging()   

obj1.Display()


