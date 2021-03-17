## creating an empty i*w matrix
def Empty_list(len_profit_list,len_weight_list):
    list1 = []
    temp_list1 = []
    for i in range(len_profit_list + 1):
        for w in range(len_weight_list + 1):
            temp_list1.append(0)
        list1.append(temp_list1)
        temp_list1 = []
    return list1

def KnapSack(profit_list,weight_list):
    len_profit_list   = len(profit_list)
    len_weight_list = len(profit_list) * 2
    list1 = Empty_list(len_profit_list,len_weight_list)
    
    for i in range(len_profit_list + 1):
        for w in range(len_weight_list + 1):
            if (i==0 or w==0):  # By-default, 1st row and 1st column --> 0
                list1[i][w] = 0

            elif (w>=weight_list[i-1]):  # (list1[i-1][w-w[i]]>=0)
                list1[i][w] = max(   (list1[i-1][w])  ,  (list1[i-1][w-weight_list[i-1]] + profit_list[i-1])   )

            elif (w<weight_list[i-1]):  # (list1[i-1][w-w[i]]<0) (i.e list1[i-1]negate_value)
                list1[i][w] = list1[i-1][w]

    return (list1[len_profit_list][len_weight_list])

if __name__ == '__main__':
	profit_list   = list(map(int,input("Enter the profit list   : ").split()))
	weight_list = list(map(int,input("Enter the weight list : ").split()))
	print("Total profit : ",KnapSack(profit_list,weight_list))