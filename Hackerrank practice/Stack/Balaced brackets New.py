def IS_BALANCED(list2):
    stack = []     ## a new stack  
    top = -1      
    middle = len(list2)//2

    for i in range(middle):
        top+=1
        stack.append(list2[i])

    for j in range(middle,len(list1)):
        if ((list2[j]==stack[top]+1) or (list2[j]==stack[top]+2)):
            stack.pop()
            top-=1

    if stack==[]:print("YES")
    else:print("NO")

n = int(input())
for j in range(n):
    list1 = list2 = []
    list1 = input().split()
    list2 = [ord(i) for i in list1]   # converting into ASCII

    IS_BALANCED(list2)
    