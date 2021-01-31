def Binary_Search(list1,element):
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
print('The element is present at : ',Binary_Search(list1,19))
print('The element is present at : ',RecursiveBinary_Search(list1,0,len(list1),45))