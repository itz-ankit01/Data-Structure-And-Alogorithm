n=int(input())
arr=[int(i) for i in input().split(' ')]
t=sum(arr)
cnt=0
arr2=[]
for i in range(n):
    if (arr[i]==(t-arr[i])/(n-1)):
        cnt+=1
        arr2.append(i+1)
print(cnt)
if(cnt>0):
    for i in arr2:
        print(i, end=' ')