def Bubble_Sort(list1):
    for i in range(len(list1)):
        for j in range(len(list1)-1-i):
            if j and list1[j]>list1[j+1]:
                list1[j],list1[j+1] = list1[j+1],list1[j]

list1 = [2,8,7,4,5]
print("list before sorting : ",*list1)
Bubble_Sort(list1)
print("list after sorting : ",*list1)