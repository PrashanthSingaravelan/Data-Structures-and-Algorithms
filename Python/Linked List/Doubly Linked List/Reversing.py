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

def Display(obj1):   
    ptr = obj1.head
    while ptr!=None:
        print(ptr.data,end=" ")
        ptr = ptr.next

def Reverse(obj1):
    ptr       = obj1.last =obj1.head
    while ptr!=None:
    # Swappping all the links
        temp         = ptr.next       
        ptr.next     = ptr.previous
        ptr.previous = temp
        
        ptr=ptr.previous #ptr will move in previous
        
        if ptr!=None and ptr.next==None: # Once ptr reaches the last node
            obj1.head=ptr

if  __name__=="__main__":
  list1=[10,20,30,40,50]
  obj1=LinkedList(list1)
  obj1.Append(list1)

  print("Before Reversing : ",end="")
  Display(obj1)
  
  print()
  print("Head : ",obj1.head.data)
  print("Last : ",obj1.last.data)
  
  Reverse(obj1)
  
  print()
  print("After Reversing  : ",end="")
  Display(obj1)
  
  print()
  print("Head : ",obj1.head.data)
  print("Last : ",obj1.last.data)