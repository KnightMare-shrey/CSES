a=[int(i) for i in input().strip().split(' ')]
n,target=a[0],a[1]

li=[int(i) for i in input().strip().split(' ')]

li.sort()

l,r=1,n-1
i=0
ans=[]

while(i<n-3):
    sum=li[i]+li[l]+li[r]
    if(sum==target):
        ans.append([li[i],li[l],li[r]])
        break
    elif(sum>target):
        r-=1
    else:
        l+=1

print(ans)