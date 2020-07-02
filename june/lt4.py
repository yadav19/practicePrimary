for _ in range(int(input())):
    n,k = map(int,input().split())
    ll = list(map(int,input().split()))
    xx = [0]*32
    for i in ll:
        x = bin(i)[2:]
        for j in range(len(x)):
            if x[j]=='1':xx[j]+=1
    ans=0
    while k>0:
        k-=1;c=0;p=-1
        for i in range(32):
            if(xx[i]>0):
                if(ans+xx[i]*(2**i)>ans+c): c=xx[i]*2**i;p=2**i
        if(p==-1): break
        else: ans+=p;xx[i]=0
    print(ans)