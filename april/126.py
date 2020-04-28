t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    s = input()
    if(n==1): print(0);continue
    A1 = "RGB"*n
    A2 = "GBR"*n
    A3 = "BRG"*n
    ans = k
    x1 = 0
    x2 =0
    x3 =0
    for j in range(0,k):
        x1+=s[j]!=A1[j]
        x2+=s[j]!=A2[j]
        x3+=s[j]!=A3[j]
    ans = min(ans,x1,x2,x3)
    for i in range(k,n):
        x1+=(s[i]!=A1[i])-(s[i-k]!=A1[i-k])
        x2+=(s[i]!=A2[i])-(s[i-k]!=A2[i-k])
        x3+=(s[i]!=A3[i])-(s[i-k]!=A3[i-k])
        ans = min(ans,x1,x2,x3)
    print(ans)
