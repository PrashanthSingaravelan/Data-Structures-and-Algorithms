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

    def InsertSort(self,element):
        t=Node(element)
        ptr=self.head
        qtr=None
         
        while ptr and ptr.data < element:
            qtr = ptr
            ptr = ptr.next
        
        if ptr is self.head:
            t.next    = self.head
            self.head = t
        else:
            qtr.next = t
            t.next  = ptr
            
    def Display(self):
      ptr=self.head
      while ptr:
         print(ptr.data,end=" ")
         ptr=ptr.next

# Main function 
n     = input("Enter the List elements : ")
list1 = n.split()
list1 = list(map(int,list1))
list1.sort()

obj1=LinkedList(list1)
obj1.Append(list1)

element=int(input("Enter the element : "))

print("Before Inserting : ")
obj1.Display()
obj1.InsertSort(element)

print()
print("After Inserting : ")
obj1.Display()


