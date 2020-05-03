t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    s = sorted(list(input()))
    if(k==1): print(*s,sep="");continue
    elif n==k: print(s[-1])
    else:
        if s[0]!=s[k-1]: print(s[k-1])  
        else:
            if(s[k]!=s[-1]):print(s[0],*s[k:],sep="")
            else: print(s[0]+ s[k]*((len(s)-k)//k)+(s[k] if len(s)%k else ""))

