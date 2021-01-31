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
        if (self.front==self.rear):
            print('Queue is empty')
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

## Main method
obj1 = Queue()
obj1.Create()

obj1.Enqueue(9)
obj1.Enqueue(8)
obj1.Enqueue(4)
obj1.Enqueue(7)
obj1.Enqueue(3)


print("Front element : ",obj1.list1[obj1.front])
print("Rear element  : ",obj1.list1[obj1.rear])

print('Before Dequeue : ',end=" ")
obj1.Display()

print('Deque element  : ',obj1.Dequeue())

print('After Dequeue  : ',end=" ")
obj1.Display()

print("Front element : ",obj1.list1[obj1.front])
print("Rear element  : ",obj1.list1[obj1.rear])

if obj1.isEmpty():
    print('The queue is empty')
else:
    print('The queue is not empty')