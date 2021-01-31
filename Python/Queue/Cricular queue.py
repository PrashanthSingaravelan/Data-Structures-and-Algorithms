class Queue:
    def __init__(self):
        self.list1 = []
        self.front = 0
        self.last  = 0
    
    def Create(self,size):
        self.size = size
        self.front=0
        self.rear =-1

    def Enqueue(self,element):
        self.rear             = (self.rear+1)%self.size
        self.list1[self.rear] = element
    
    def Dequeue(self):
        x = 0
        if(self.front==self.rear):
            print('Queue is empty')
        else:
            self.front = (self.front+1)%self.size
            x = self.list1[self.front]
            return x            

obj1 = Queue()
obj1.Create(5)

obj1.Enqueue(9)
obj1.Enqueue(0)
obj1.Enqueue(3)
obj1.Enqueue(4)
obj1.Enqueue(5)


