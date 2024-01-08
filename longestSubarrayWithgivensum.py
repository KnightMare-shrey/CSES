# positive
a=[int(i) for i in input().strip().split(' ')]
n,target=a[0],a[1]
li=[int(i) for i in input().strip().split(' ')]

l,r=0,0
sum=li[0]
count=0
while(r<n):
    if(sum==target):
        count+=1
        sum-=li[l]
        l+=1
    r+=1
    if(r<n):
        sum+=li[r]
    while(sum>target):
        sum-=li[l]
        l+=1
print(count)
# negative
