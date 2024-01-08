# def fun(target,li):
#     l,r=0,len(li)-1
#     nn=-1
#     while(l<=r):
#         mid=(l+r)//2
#         val=li[mid]
#         if(val<=target):
#             nn=val
#             l=mid+1
#         else:
#             r=mid-1
#     return nn
# v=[int(i) for i in input().strip().split(' ')][:2]
# t,c=v[0],v[1]

# ticketPrice=[int(i) for i in input().strip().split(' ')][:t]
# cusCap=[int(i) for i in input().strip().split(' ')][:c]

# ticketPrice=sorted(ticketPrice)

# count=0

# for i in range(len(cusCap)):
#     a=fun(cusCap[i],ticketPrice)
#     if(a!=-1):
#         print(a)
#         ticketPrice.remove(a)
#     else:
#         print(-1)
def concert_tickets(prices, queries):
    prices.sort()  # Sorting the list of ticket prices

    result = []

    for query in queries:
        # Use binary search to find the index of the smallest ticket price greater than or equal to the query
        index = bisect_right(prices, query)

        if index > 0:
            # If there is a valid index, print the ticket price and remove it from the list
            ticket_price = prices[index - 1]
            result.append(ticket_price)
            prices.pop(index - 1)
        else:
            # If no valid index, print -1
            result.append(-1)

    return result

# Example usage:
from bisect import bisect_right

n, m = map(int, input().split())
ticket_prices = list(map(int, input().split()))
customer_queries = list(map(int, input().split()))

result = concert_tickets(ticket_prices, customer_queries)

for res in result:
    print(res)
