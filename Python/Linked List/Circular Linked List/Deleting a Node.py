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

def Display(ptr,count):
    for i in range(100):
        print(ptr.data,end=" ")
        ptr=ptr.next
        
        if ptr==obj1.head: break
    
def Index(qtr,element,n):
# 1) We want to spot the index at which the element is present
    index=0
    for i in range(n):
        if qtr.data is element:
            pass
        else:
            index = index+1
            qtr   = qtr.next
    index+=1
    return index
# Now we found the index where the element is present
    
def Delete(obj1,element,n):
    ptr   = obj1.head
    index = Index(obj1.head,element,n)   

# 2) Head Node Conditions
# If we want to remove the head node Reach untill the end and hold a pointer/ use the last pointer     
    if index==1:
      ptr = obj1.last
# Check if we have only one node in that linked list  Or having many nodes

      if ptr is obj1.head:    # Only one node in the linked list
        x = obj1.head.data
        del(obj1.head)
      else:                   # We have many nodes
        ptr.next       = obj1.head.next       # Linking last node to the head->next
        x              = obj1.head.data
        del(obj1.head)
        obj1.head      = ptr.next
        
# Head Node conditions are completed 

# 3) Checking for the remaining Nodes
    else:
        for j in range(index-2):
            ptr = ptr.next
        qtr      = ptr.next
        ptr.next = qtr.next
        x        = qtr.data
        del(qtr)
    
    return x   # At last return the deleted element
        
  
# Main function
list1=[10,20,30,40,50]
obj1=LinkedList(list1)
obj1.Append(list1)

print("Before Deletion : ",end="")
Display(obj1.head,5)

Delete(obj1,10,5)

print()
print("After Deletion  : ",end="")
Display(obj1.head,5)