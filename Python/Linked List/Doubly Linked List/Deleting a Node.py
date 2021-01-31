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

def Delete(obj1,element,n):
    ptr   = obj1.head
    index = 0
# 1) We want to spot the index at which the element is present
    for i in range(n):
        if ptr.data is element:
            pass
        else:
            index = index+1
            ptr   = ptr.next
    index+=1
    
# Now we found the index where the element is present
    
    if index==0:
        x      = first.data
        ptr    = first
        first  = first.next
        del ptr
    

# Main Function
list1=[10,20,30,40,50]
obj1=LinkedList(list1)
obj1.Append(list1)

print("Before Inserting : ")
Display(obj1,5)
Delete(obj1,10,5)
Display(obj1,5)