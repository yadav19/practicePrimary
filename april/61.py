# n,m = map(int,input().split())
# G = [[] for _ in range(n+1)]
# V = [1]*(n+1)
# for i in range(m):
#     x,y = map(int,input().split())
#     G[x].append(y)
#     G[y].append(x)
# l = [1]
# V[1] = 0
# q = []
# q.extend(G[1])
# while len(q)>0:
#     q.sort()
#     if q[0] not in l: l.append(q[0])
#     V[q[0]] = 0
#     for x in G[q.pop(0)]:
#         if V[x]: q.append(x)

# print(*l)

from heapq import*

n,m= map(int,input().split())
V=[0,0]+[1]*(n-1)
g=[[]for _ in V]

for _ in [0]*m:
    u,v= map(int,input().split())
    g[u].append(v)
    g[v].append(u)

h=[1]
l = []
while h:
    u=heappop(h)
    l.append(u)
    for v in g[u]:
        if V[v]:
            V[v]=0
            heappush(h,v)

print(*l)