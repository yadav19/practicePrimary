n = int(input())
l = list(map(int,input().split()))
q = int(input())
ql = []
ans = [-1]*n
m=0
for _ in range(q): ql.append(tuple(map(int,input().split())))
for i in range(q-1,-1,-1):
    if ql[i][0]==2:
        m = max(m,ql[i][1])
    else:
        if ans[ql[i][1]-1] == -1:
            ans[ql[i][1]-1] = max(m,ql[i][2])

for i in range(n):
    if ans[i]==-1: ans[i] = max(m,l[i])
print(*ans)