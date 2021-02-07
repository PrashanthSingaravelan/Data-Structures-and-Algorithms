def Selection_sort(list1):
    j=k=0
    for i in range(len(list1)-1):
        j=k=i;
        for j in range(j,len(list1)):
            if list1[j]<list1[k]:
                k=j
        list1[i],list1[k] = list1[k],list1[i]
        
list1 = [2,8,7,4,5]
print("list before sorting : ",*list1)
Selection_sort(list1)
print("list after sorting : ",*list1)
