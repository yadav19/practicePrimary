n,k,m,t = map(int,input().split())
l = 1
r = n
for _ in range(t):
    a,b = map(int,input().split())
    if a==0:
        if b>k: r=b
        elif b==k: k=b;r=b
        else: k-=b;r-=b
        print(r,k)
    else :
        if b>k: r=min(r+1,m)
        else:
            if(k+1<=m): k+=1;r+=1
        print(r,k)