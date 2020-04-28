n = int(input())

if(n==1 or n==2):print(0)
else:

    a = sorted(list(map(int,input().split())))

    d = [a[1]-a[0],a[1]-a[0]-1,a[1]-a[0]+1]
    ff = 0
    A = 10000000000
    for i in d:
        x = a[:]
        f=1
        ans=0
        for j in range(1,n):
            if (x[j]-x[j-1] == i): pass
            elif(x[j]-x[j-1]-1 == i): x[j]-=1;ans+=1
            elif(x[j]-x[j-1]+1 == i): x[j]+=1;ans+=1
            else: f=0;break
        
        if(f):A=min(A,ans);ff=1;break

    a = a[::-1]
    d = [a[1]-a[0],a[1]-a[0]-1,a[1]-a[0]+1]
    for i in d:
        x = a[:]
        f=1
        ans=0
        for j in range(1,n):
            if (x[j]-x[j-1] == i): pass
            elif(x[j]-x[j-1]-1 == i): x[j]-=1;ans+=1
            elif(x[j]-x[j-1]+1 == i): x[j]+=1;ans+=1
            else: f=0;break
        
        if(f):A=min(A,ans);ff=1;break

    if(ff): print(A)
    else: print(-1)

