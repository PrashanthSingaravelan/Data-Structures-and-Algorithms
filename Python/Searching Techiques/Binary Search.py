def Binary_Search1(list1,element):
    L=0
    H=len(list1)
    M=int(L+H/2)
    if element in list1:
        while(list1[M]!=element):
            if(element<list1[M]):
                H=M
                M=int((L+H)/2)
            elif(element>list1[M]):
                L=M
                M=int((L+H)/2)
        return M
    else:
        return('The element is not present')

def Binary_Search2(list1,element):
    low = 0
    high = len(list1)-1
    mid = 0

    while low<=high:
        mid = (low+high)//2
        
        if list1[mid]<element:
            low = mid+1
        elif list1[mid]>element:
            high = mid-1 
        else:
            return mid   
    return -1

def RecursiveBinary_Search(list1,L,H,element):
    if H>=L:
        M=int((L+H)/2)
        if (list1[M]==element):return M
        elif(element<list1[M]):return(RecursiveBinary_Search(list1,L,M+1,element))
        else:return(RecursiveBinary_Search(list1,M-1,H,element))
    else:return -1

list1=[90,32,45,21,56,78,35,89,54,19]
list1.sort()
print('The Sorted list : ',*list1)
print('The element is present at : ',Binary_Search1(list1,19))
print('The element is present at : ',RecursiveBinary_Search(list1,0,len(list1),45))

#####################################
element = 90
result = Binary_Search2(list1,element)
if result==-1:
    print("Element is not found")
else:
    print("Element is found")