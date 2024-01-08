li=[int(i) for i in input().strip().split(' ')][:3]
n,m,k=li[0],li[1],li[2]

aplicants=[int(i) for i in input().strip().split(' ')][:n]
appartments=[int(i) for i in input().strip().split(' ')][:m]

aplicants=sorted(aplicants)
appartments=sorted(appartments)

i,j=0,0
count=0

while(i<len(aplicants) and j<len(appartments)):
    if(aplicants[i]+k<appartments[j]):
        i+=1
    elif(aplicants[i]-k>appartments[j]):
        j+=1
    else:
        j+=1
        i+=1
        count+=1
print(count)