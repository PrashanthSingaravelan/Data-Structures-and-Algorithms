class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

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
      print("Last : ",last.data)
      print("Last next : ",last.next)
       
    def Display(self):
     print("Iterative Display : ")
     ptr=self.head
     while ptr:
         print(ptr.data)
         ptr=ptr.next
    
    def AlternateDisplay(self):
        ptr=self.head
        print("Alternate Display : ")
        while ptr:
         print(ptr.data)
         if ptr.next is not None:
          ptr=ptr.next.next
         else : break
         
    
    
list1=[90,89,76,23]

obj1=LinkedList(list1)
obj1.Append(list1)

obj1.Display()

obj1.AlternateDisplay()


