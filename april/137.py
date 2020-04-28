q=int(input())
for _ in range(q):
    n = int(input())
    l = sorted(list(map(int,input().split())))
    if len(l)==1:print(l[0]*l[-1])
    else:
        if l[0]*l[-1] == l[1]*l[-2] : print(l[0]*l[-1])
        else:print(-1)