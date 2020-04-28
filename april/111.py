n =int(input())
q = []
ans = []
b = [[] for x in range(n+1)]
for i in range(n-2):
    q.append(list(map(int,input().split())))
    for j in q[i]:
        b[j].append(i)

for i in range(1,n+1): 
    if len(b[i])==1: break
ans.append(i)

for _ in range(n-1):
    for e in b[i]:
        for j in q[e]:
            if(len(ans)==1 and j not in ans and len(b[j])==2 ) or (len(ans)>1 and j not in ans[-3:] and ans[-1] in q[e] and ans[-2] in q[e]):
                ans.append(j)
                i = j

print(*ans)