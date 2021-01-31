def Maxi(R,C,arr):
    max_sum = -10000
    if R<=3 or C<=3:
      return -1
    for i in range(R-2):
      for j in range(C-2):
        if ((0<=i<=5) and (0<=j<=5)):
          sum1 = arr[i][j] + arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
          max_sum = max(sum1,max_sum)
    return max_sum    

arr = []
for i in range(6):
    a = [int(j) for j in input().strip().split(' ') ]
    arr.append(a)

R=6
C=6

print(Maxi(R,C,arr))