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
    print("With the Help of Next Node : ")
    while ptr!=None:
        print(ptr.data,end=" ")
        ptr = ptr.next
    
    print()
    ptr = obj1.last
    print("With the Help of Previous Node : ")
    while ptr:
        print(ptr.data,end=" ")
        ptr = ptr.previous
        
        
        

# Main Function
list1=[10,20,30,40,50]
obj1=LinkedList(list1)
obj1.Append(list1)

print("Iterative Display : ")
Display(obj1,5)
