def fun1(x,y):
    if(x == 0): 
      print(y)
    else:
      print(fun1(x-1,x+y))

m=fun1(2,4)