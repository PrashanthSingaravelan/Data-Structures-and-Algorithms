class Node:
    def __init__(self,x):
        self.data = x
        self.next = None
    
class Queue1:
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
    
    def IsEmpty(self):
        if (self.front==None and self.rear==None):
            return True
        else:
            return False


def Total_Time(obj1,obj2):    
    i=0    
    while obj2.front!=None:
        if (obj1.front.data == obj2.front.data):
            i=i+1            
            obj1.Dequeue()
            obj2.Dequeue()
        else:
            i=i+1
            t    = obj1.front
            obj1.front     = obj1.front.next
            t.next = None
            obj1.rear.next = t
            obj1.rear = t
    print(i)


n=int(input())
list1 = list(map(int,input().split()))
list2 = list(map(int,input().split()))

obj1 = Queue1() # Calling order
obj2 = Queue1() # Ideal order

for i in range(len(list1)):
    obj1.Enqueue(list1[i])
    obj2.Enqueue(list2[i])

Total_Time(obj1,obj2)