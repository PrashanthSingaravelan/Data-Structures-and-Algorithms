def Maximum(profit_weight):
    maxi = (0,0)
    for i,j in profit_weight:
        if maxi[1]<j:
            maxi = (i,j)
    return maxi

def Knapsack(input_profit,input_weight,input_capacity):
    capacity = input_capacity
    profit_weight = [ int(j/i) for i,j in zip(input_weight,input_profit)]
    weight = [(i,input_weight[i]) for i in range(len(input_weight))]
    profit = [(i,input_profit[i]) for i in range(len(input_profit))]
    profit_weight = [(i,profit_weight[i]) for i in range(len(profit_weight))]
    
    x = []
    for i in range(len(input_profit)):
        x.append(0)

    for i in range(len(weight)):
        if capacity>0:
            maximum = Maximum(profit_weight)
            index = maximum[0]
            if ((weight[maximum[0]][1])<=capacity):
                capacity = capacity - weight[index][1]
                x[index] = 1
                profit_weight[index] = (0,0)
            elif ((capacity - weight[index][1])  < 0):
                x[index] = capacity/(weight[index][1])
                profit_weight[index] = (0,0)
                capacity = 0
            else:
                x[index] = 0
                profit_weight[index] = (0,0)

           # Calculating summation of x_p
            x_p = 0
            for i,j in profit:
                x_p = x_p + j*x[i]

           # Calculation summation of x_w
            x_w = 0
            for i,j in weight:
                x_w = x_w + j*x[i]

            if int(x_w) == input_capacity:
                print("Maximum value in Knapsack : ",x_p)        
        

if __name__ == '__main__':
	print("Shop-1")
	input_profit = [10,5,15,7,6,18,3]
	input_weight = [2,3,5,7,1,4,1]
	input_capacity = 15
	Knapsack(input_profit,input_weight,input_capacity)

	print("Shop-2")
	input_profit = [60,40,100,120]
	input_weight = [10,40,20,30]
	input_capacity = 50
	Knapsack(input_profit,input_weight,input_capacity)