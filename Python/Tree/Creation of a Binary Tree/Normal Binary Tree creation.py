                  # Queue module
######################################

class Queue:
    def __init__(self):
        self.list1 = []
        self.front = 0
        self.rear  = 0
    
    def Create(self):
        self.front = 0
        self.rear = -1

    def Enqueue(self,element):
            self.list1.append(element)
            self.rear = self.rear+1
            
    def Dequeue(self):
        x=0
        if (self.front==self.rear):print('Queue is empty')
        else:
            x = self.list1[self.front]
            self.list1.remove(self.list1[self.front])
            self.rear = self.rear-1
            return x
        
    def isEmpty(self):
        if self.rear==self.front:return 1
        else: return 0
    
    def Display(self):
        print(*self.list1)

#######################################

class Node():
    def __init__(self,data):
        self.data  = data
        self.left  = None
        self.right = None

class Binary_Tree():
    def ToCreate(self,obj1):
        self.root = Node(input('Enter the root value : '))
        obj1.Enqueue(self.root)

        while(len(obj1.list1)!=0):
            self.p=obj1.Dequeue()

            print('Enter the left child of ',self.p.data)
            self.x=int(input())
            if(self.x!=-1):
                self.t      = Node(self.x)
                self.p.left = self.t
                obj1.Enqueue(self.t)
        
            print('Enter the right child of ',self.p.data)
            self.x=int(input())
            if(self.x!=-1):
                self.t       = Node(self.x)
                self.p.right = self.t
                obj1.Enqueue(self.t)  

                
obj1 = Queue()   # Intialising the queue
obj2 = Binary_Tree()
obj2.ToCreate(obj1)