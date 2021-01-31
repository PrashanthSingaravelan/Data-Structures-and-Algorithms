print('Imported Sucessfully')
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
