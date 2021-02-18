def Partition(list1,low_index,high_index):
    pivot = list1[low_index]
    i = low_index
    j = high_index
    while j>i:
        while(list1[i]<=pivot):
            i = i + 1
        while(list1[j]>pivot):
            j = j - 1
        if j>i:     ## Swap ith  and jth element
            list1[j],list1[i] = list1[i],list1[j]
            
    list1[low_index] , list1[j] = list1[j] , list1[low_index]   ## swap pivot and jth element
    return j

def Quick_Sort(list1,low_index,high_index):
    if (low_index<high_index) : 
        j = Partition(list1,low_index,high_index)  ## [40, 30, 20, 10, 50, 80, 90, 60, 70, 1000000]  (j=4)
        Quick_Sort(list1,low_index,j)
        Quick_Sort(list1,j+1,high_index)
    return list1[:-1]  ## Omitting the max_int which is the infinity value

if __name__ == '__main__':
    max_int = 1000000
    list1 = [50,70,60,90,40,80,10,20,30,max_int]
    low_index = 0
    high_index = len(list1)-1
    print("The Sorted list : ",Quick_Sort(list1,low_index,high_index))