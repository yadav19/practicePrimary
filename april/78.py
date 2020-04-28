s = input()
ones=0
ans=""
for i in range(len(s)):
    if s[i] == '1': ones+=1
    else: ans+=s[i]
for i in range(len(ans)):
    if ans[i] == '2':
        ans = ans[:i] +'1'*ones + ans[i:]
        break
if(len(ans)!=len(s)): ans+='1'*ones
print(ans)