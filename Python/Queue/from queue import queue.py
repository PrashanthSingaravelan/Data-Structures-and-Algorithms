from queue import Queue
# obj1 = Queue(maxsize=9) --> Intialising the queue with size=9
# obj1.qsize()            --> Returns the number of the elements in the queue
# obj1.put()  [Enqueue]   --> Inserts an element into the queue through the rear pointer
# obj1.get()  [Dequeue]   --> Removes an element from the queue through the from pointer
# obj1.full()             --> Returns True, if the size of the queue==number of elements added/ Returns False
# obj1.empty()            --> Returns True, if the queue is empty/Returns False 

obj1 = Queue(maxsize=9)

print('Size before inserting the elements : ',obj1.qsize()) 

# Inserting all the elements in the queue
str1='Prashanth'
for i in str1:
    obj1.put(i)

print('Size after inserting the elements : ',obj1.qsize())
print('First element popped out : ',obj1.get())  

print('Object is empty : ',obj1.empty())
print('With 8 elements Is queue is full : ',obj1.full())

obj1.put('o')
print('With 9 elements Is queue is full : ',obj1.full())

print('Is queue is empty : ',obj1.empty())

