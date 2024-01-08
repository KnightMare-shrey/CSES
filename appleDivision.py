# Input: 5
# 3 2 7 4 1
#Output: 1
# Explanation: Group 1 has weights 2, 3 and 4 (total weight 9), 
# and group 2 has weights 1 and 7 (total weight 8).


# create all subsequence for list
n=int(input())
li=[int(i) for i in input().strip().split(' ')][:n]
min_diff=1e9

total=sum(li)

for i in range(1<<n):
    num=0
    for j in range(n):
        if(i & 1<<j):
            num+=li[j]
    diff=abs((total-num)-num)
    min_diff=min(min_diff,diff)

print(min_diff)
