def fun(i):
    if(i%2!=0):
       return i+1
    else:
       return fun(fun(i-1))

c=fun(200)
print(c)