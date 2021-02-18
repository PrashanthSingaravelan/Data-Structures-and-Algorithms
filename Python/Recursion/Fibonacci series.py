# fibonacci(n) --> 0 1 2 3 4 5 6 7
# Answer       --> 0 1 1 2 3 5 8 13
#		0 and 1 are fixed 

# fibonacci(0) = 0
# fibonacci(1) = 1
# fibonacci(2) = 1

def recursive_fibonacci(n):
	if n==1 or n==2:
		return 1
	elif n==0:
		return 0
	else:
		return (recursive_fibonacci(n-2) + recursive_fibonacci(n-1))

def iterative_fibonacci(n):
	sum1 = 0
	for i in range(n+1):
		if i==0:
			sum1 = 0
		if i==1 or i==2:
			sum1 = 1
		else:
			sum1 = sum1 + i
	return sum1


if __name__ == "__main__":
	print("Recursive answer is : ",recursive_fibonacci(1))
	print("Iterative answer is : ",iterative_fibonacci(1))