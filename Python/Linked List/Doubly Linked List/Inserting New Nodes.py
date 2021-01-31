class Node:                         # Class Node Constructor
    def __init__(self,data=None):
        self.previous = None
        self.data     = data
        self.next     = None

class LinkedList:
    def __init__(self,list1):        # Class Linked List Constructor
        self.head = Node(list1[0])
        self.last = self.head
    
    def Append(self,list1):
        for i in range(1,len(list1),1):
            t              = Node(list1[i])
            t.previous     = self.last
            self.last.next = t
            self.last      = t

def Display(obj1,n):
    
    ptr = obj1.head
    while ptr!=None:
        print(ptr.data,end=" ")
        ptr = ptr.next

def Insert(obj,element,index):
   if index==0:    # If we want to insert in the 1st position
     t                  = Node(element)
     t.next             = obj1.head
     obj1.head.previous = t
     obj1.head          = t
    
   else:                 # If we want to Insert in some other position
     ptr=obj1.head       # Move a pointer from the first Node
     for i in range(index-1):
       ptr=ptr.next      # After reaching the desired position,
                         # Make a New Node and link it accordingly
     t = Node(element)
# Totally 4 links should be made
    # t links are made
     t.next     = ptr.next    # Link 1
     t.previous = ptr         # Link 2
# If t is the last node other links are not necessery 
     if ptr.next:             
      ptr.next.previous = t  # Other links should be made if the inserting node is not the last node
     ptr.next          = t
     
# Main Function
list1=[10,20,30,40,50]
obj1=LinkedList(list1)
obj1.Append(list1)

print("Before Inserting : ")
Display(obj1,5)
Insert(obj1,100,5)

print()
print("After Inserting : ")
Display(obj1,5)
