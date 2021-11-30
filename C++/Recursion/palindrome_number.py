def palindrome(n,result):
    if n==0:
        return result
    result = result*10 + n%10  
    return(palindrome(n//10,result))

if __name__ == '__main__':
	num1 = int(input("Enter the number : "))
	if palindrome(num1,0)==num1:
	    print("Palindrome")
	else:
	    print("Not Palindrome")