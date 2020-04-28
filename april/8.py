t = int(input())

for _ in range(t):

    a,b = input().split()

    if(a < b): print(a)
    elif(a==b): print("---")
    else:
        tm = list(a)
        a = list(a)
        tm = sorted(tm)
        # print(tm)
        # print(a)
        for i in range(len(tm)):
            if a[i] > tm[i]:
                # print(a[i])
                for j in range(i+1,len(a)):
                    if tm[i] == a[j]:
                        a[i],a[j] = a[j],a[i]
                        # print(a[j])
                        break
                break
        a = "".join(a)
        if(a<b): print(a)
        else: print("---")