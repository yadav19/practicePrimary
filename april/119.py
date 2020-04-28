for _ in range(int(input())):
    n = int(input())
    s = list(input())
    s1 = sorted(s)
    br = 0
    ans = list("2"*len(s))
    i =0
    while(br<2 and i!=len(s)):
        for j in range(len(s)):
            if i == len(s): break
            if s1[i]==s[j]:
                i+=1
                if br==0:ans[j]='1'
        br+=1
    if(i==len(s)):print("".join(ans))
    else:print("-")