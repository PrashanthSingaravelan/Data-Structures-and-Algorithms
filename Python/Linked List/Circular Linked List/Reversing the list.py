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

def Reverse(obj1):
    ptr = obj1.head
    qtr = None
    rtr = None
    
    while(qtr!=obj1.last):
        rtr=qtr
        qtr=ptr
        ptr=ptr.next
        
        qtr.next=rtr
    
    obj1.last=obj1.head
    obj1.head.next = qtr
    obj1.head=qtr
    
def Display(ptr,count):
    for i in range(6):
        print(ptr.data,end=" ")
        ptr=ptr.next
        
list1=[10,20,30,40,50]
obj1=LinkedList(list1)
obj1.Append(list1)

print("Before Reversing : ",end=" ")
Display(obj1.head,5)

Reverse(obj1)

print()
print("After Reversing  : ",end=" ")
Display(obj1.head,5)

# The Repeated elements shows the links are perfect

