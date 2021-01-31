from collections import deque
obj1 = deque()

str1 = str(input())
for i in range(len(str1)):
    obj1.append(str1[i])

print('Before pop() ')
print(obj1)

print('Popped element : ',obj1.pop())
print('After pop() ')
print(obj1)