def insertion_sort(list1):
    for i in range(len(list1)):
        
        element = list1[i]
        j       = i-1
        
        while(j>-1 and list1[j]>element):
            list1[j+1] = list1[j]
            j-=1

        list1[j+1] = element
    return list1