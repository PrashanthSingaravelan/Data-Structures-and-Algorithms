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
       
    def Display(self):
     print("Iterative Display : ")
     ptr=self.head
     while ptr:
         print(ptr.data)
         ptr=ptr.next
    
    def Maximum(self,list1):
        ptr=self.head
        mini = list1[0]
        maxi = list1[0]
        
        while ptr:
            if mini > ptr.data:
                mini=ptr.data
            if maxi < ptr.data:
                maxi=ptr.data
            ptr=ptr.next
        print("Minimum element : ",mini)
        print("Maximum element : ",maxi)
         
    
    
list1=[90,89,76,23]

obj1=LinkedList(list1)
obj1.Append(list1)

obj1.Display()

obj1.Maximum(list1)


