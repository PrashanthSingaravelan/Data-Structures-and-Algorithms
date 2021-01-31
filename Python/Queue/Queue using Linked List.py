class Node:
    def __init__(self,x):
        self.data = x
        self.next = None

class Queue:
    def __init__(self):
        self.front = None
        self.rear  = None
            
    def Enqueue(self,x):  
        t = Node(x)
        if (self.front==self.rear==None):    ## If it is the first node
            self.front = self.rear = t
        else:
            self.rear.next = t
            self.rear = t
    
    def Dequeue(self):
        if (self.front==None and self.rear==None):    # If there are no nodes in the linked list
            print('There is no element to remove from the queue')
        else:                           
            x = self.front.data
            self.front = self.front.next
            return x
        
        if self.front is None:    # After removing the element, the front is None, so we can de-allocate the space 
            self.rear = None
    
    def Display(self):
        t = self.front
        while t!=None:
            print(t.data,end=' ')
            t = t.next
    
    def Peek(self):
        if self.front==self.rear==None:
            print('There are no elements in the linked list')
        else:
            return self.front.data
    
    def IsEmpty():
        if self.front==self.rear==None:
            return None

obj1 = Queue()

obj1.Enqueue(10)
obj1.Enqueue(2)
obj1.Enqueue(3)
obj1.Enqueue(9)
obj1.Enqueue(5)

print('The front data : ',obj1.front.data)
print('The rear data  : ',obj1.rear.data)

print('The Peek elment : ',obj1.Peek())

print('The Queue elements : ')
obj1.Display()