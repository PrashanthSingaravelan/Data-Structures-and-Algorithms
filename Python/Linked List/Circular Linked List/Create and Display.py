class Node:
    def __init__(self,data=None):
        self.data = data
        self.next = None

class LinkedList:
    flag=1
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

def Display(ptr,count):
    for i in range(100):
        print(ptr.data,end=" ")
        ptr=ptr.next
        
        if ptr==obj1.head:
            print()
            print(ptr.data," : ",end="")
            print("It indicates that it is a Circular Linked List",end="")
            break

# Main function
list1=[90,89,43,13,29]
obj1=LinkedList(list1)
obj1.Append(list1)
print("Iterative Display : ",end="")
Display(obj1.head,5)


        
        