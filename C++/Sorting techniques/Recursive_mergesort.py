def Merge_sort(list1):
    if len(list1)>1:
        middle = len(list1)//2
        left_list = list1[:middle]
        right_list = list1[middle:]

        Merge_sort(left_list)
        Merge_sort(right_list)
        ###################################

        i=0
        j=0
        k=0

        middle = len(left_list)
        high = len(right_list)
        
        while (i<middle and j<high):
                if (left_list[i] < right_list[j]):
                    list1[k] = left_list[i]
                    i+=1
                else:
                    list1[k] = right_list[j]
                    j+=1
                k+=1

        while i < middle:
                    list1[k] = left_list[i]
                    i += 1
                    k += 1

        while j < high:
                    list1[k] = right_list[j]
                    j += 1
                    k += 1


if __name__ == '__main__':
    global list1
    list1 = [8,2,9,6,5,3,7,4]
    print("Before merge_sort : ",*list1)
    Merge_sort(list1)
    print("After merge_sort  : ",*list1)