n,x =input().split()
n = int(n)
x = int(x)

main_list = list(map(int,input().split()))
list1 = [(j,i) for i,j in enumerate(main_list)]
list1.sort()

for i in range(x):
    list2=[]
    if len(list1)<=x:
        for j in range(len(list1)):
            list2.append(list1[0])
            list1.remove(list1[0])
    else:
        for j in range(0,x):
            list2.append(list1[0])
            list1.remove(list1[0])
            
    loop = 0
    for i,j in list2:
        if i==0:
            loop+=1
    
    if (loop==len(list2)):    # Then all the element are 0
        mini = min(list2)
        print(mini[1]+1,end=' ')
        list2.remove(mini)
    
    else:
        maxi = max(list2)
        print(maxi[1]+1,end=' ')
        list2.remove(maxi)
    
    for a,b in list2:
        if a==0: list1.append((a,b))
        else: list1.append((a-1,b))