t = int(input())

for _ in range(t):
    n,k = map(int,input().split())
    s = input()

    pa = ["RGB"*k,"GBR"*k,"BRG"*k]

    ans = 10**9

    for i in range(n-k+1):
        for p in pa:
            count = 0
            for j in range(0,k):
                if s[j+i] != p[j]: count+=1
            
            ans = min(ans,count)
            if ans == 0: break
        if ans == 0: break
    
    print(ans)
