def Prime_iterative(n):
	cnt=0
	for i in range(1,n+1):
		if n%i==0:
			cnt+=1
	if cnt==2:print("{} is prime number".format(n))
	else:print("{} is composite number".format(n))


def Prime_recursive(i,n,cnt):
    if i<=n:
        if n%i==0:
            cnt+=1
            return Prime_recursive(i+1,n,cnt)## this return will carry the blow true or false
        else:
            return Prime_recursive(i+1,n,cnt)  ## this return will carry the blow true or false
            
    elif i>n:
        return (True if cnt==2 else False)

    
n = int(input("Enter a number : "))
cnt=0

if Prime_recursive(1,n,cnt):
	print("{} is prime number".format(n))
else:
	print("{} is composite number".format(n))

Prime_iterative(n)