def Decimal_Binary(list1,n):
    if (n//2)>=1:
        Decimal_Binary(list1,n//2)
        list1.append(n%2)
        return list1
        
    if n==1: 
        list1.append(1)
        return list1
    if n==0: 
        list1.append(1) 
        return list1
        

Decimal_Binary([],252)