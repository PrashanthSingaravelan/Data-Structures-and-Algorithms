class Node:
    def __init__(self,data=None):
        self.data = data
        self.next = None

class LinkedList:
# Creation of a circular Linked List starts
    def __init__(self,list1):
        self.head      = Node(list1[0])    
        self.head.next = self.head
        self.last      = self.head
    
    def Append(self,list1):
        for i in range(1,len(list1),1):
            t = Node(list1[i])
            t.next         = self.last.next
            self.last.next = t
            self.last      = t
# Creation of a circular Linked List ends

def Display(ptr):
    for i in range(100):
        print(ptr.data,end=" ")
        ptr=ptr.next
        
        if ptr==obj1.head:break
    
# Inserting a Node at a particular position
def Insert(obj1,position,element):
    ptr = obj1.head
    if position is 0:
        t              = Node(element)
        t.next         = obj1.head
        obj1.head      = t
        obj1.last.next = obj1.head
         
        
    else:
        for i in range(1,position):
           ptr = ptr.next
        t        = Node(element)
        t.next   = ptr.next
        ptr.next = t
        
# Main function
list1=[90,89,43,13,29]
obj1=LinkedList(list1)
obj1.Append(list1)

print("Before Inserting : ",end="")
Display(obj1.head)
print()

#element = int(input("Enter the element : "))
#position = int(input("Enter the position : "))
Insert(obj1,0,100)

print("After Inserting  : ",end="")
Display(obj1.head)
        
        