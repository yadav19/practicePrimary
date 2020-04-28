n,p = map(int,input().split())

a = list(map(int,input().split()))
d = int(input())
c = list(map(int,input().split()))

ans = 0
temp =[]
for i in range(n):
    temp.append(c[i])
    temp.sort()
    if p<a[i]:
        for j in range(0,len(temp)):
            p+=d
            ans+=temp.pop(0)
            
            if p>=a[i]: break
    
    if p<a[i]:
        ans = -1
        break

print(ans)