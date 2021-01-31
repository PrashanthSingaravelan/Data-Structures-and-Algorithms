def TOH(n,A,B,C):
    if n>0:
        TOH(n-1,A,C,B)
        print('({} , {})'.format(A,C))
        TOH(n-1,B,A,C)

TOH(1,1,2,3) # 1 disk can move from A to C with B as auxillary
print()
TOH(2,1,2,3)