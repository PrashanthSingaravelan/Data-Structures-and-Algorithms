def LeftRotation(list1):
    for i in range(d):
        list1.append(list1[0])
        list1.remove(list1[0])
    return list1

def RightRotation(list1):
    for i in range(d):
       list1.insert(0,list1[-1])
       list1.pop()
    return list1

n,d=input().split() 
n=int(n)  # Number of elements in the list
d=int(d)  # number of rotations

list1 = list(map(int,input().split()))

print('Left Rotation  : ',end="")
print(*LeftRotation(list1))

print('Right Rotation : ',end="")
print(*RightRotation(list1))
