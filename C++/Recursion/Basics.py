# Printing the value at the calling time
def func1(n):
   if n>0:
     print(n)
     func1(n-1)

func1(3)
print("Over")

 # Printing the value at the returning time
def func2(m):
     if m>0:
        func2(m-1)
        print(m)
        
func2(3)
print("Over")

# Combine both the methods
def printFun(test): 
  
    if (test < 1): 
        return
    else: 
      
        print( test,end = " ") 
        printFun(test-1) # statement 2 
        print( test,end = " ") 
        return
      
  
test = 3
printFun(test) 