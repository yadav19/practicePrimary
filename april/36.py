d = int(input())
n = input()

j = (d+1)//2
i = j-1

while i>0 and n[i] =='0': i-=1
while j<d and n[j] == '0': j+=1
ans = int(n)
if j<d: ans = min(ans,int(n[:j])+int(n[j:]))
if i>0: ans = min(ans,int(n[:i])+int(n[i:]))

print(ans)