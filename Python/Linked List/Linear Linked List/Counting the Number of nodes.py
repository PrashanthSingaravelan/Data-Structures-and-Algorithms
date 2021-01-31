class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
 # Creation of a Linked List
 # Head Node
    def __init__(self,list1):
        self.head = None
        self.head=Node(list1[0])

# Rest of the Nodes    
    def Append(self,list1):
      last=Node(None)
      last=self.head
      
      for i in range(1,len(list1),1):
       t         = Node(list1[i])
       last.next = t
       last      = t
# End of the creation
       
    def Display(self):
     print("Iterative Display : ")
     
     ptr=self.head
     while ptr:
         print(ptr.data)
         ptr=ptr.next
    
    def Count(self):
        ptr=self.head
        count=0
        while ptr:
            count+=1
            ptr=ptr.next
        return count

def test(obj1):
    for i in range(obj1.Count()):
        print(i)
    
# main    
list1=[90,89,76,23,43]

obj1=LinkedList(list1)
obj1.Append(list1)

#obj1.Display()
test(obj1)


