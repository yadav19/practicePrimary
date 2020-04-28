for _ in range(int(input())):
        s = input()
        n = len(s)
        ans = 0
        z = 0
        for i in range(n):
            if s[i]=='0':
                z+=1
            else:
                for j in range(1,n+1):
                    if i+j>n:break
                    x = int(s[i:i+j],2)
                    if z+j>=x:ans+=1
                    else: break
                z=0
        print(ans)