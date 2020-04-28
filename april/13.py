t = int(input())

for _ in range(t):
    
    ll,k = map(int,input().split())
    s = input()
    ones =0
    output = ""
    for i in s:
        if k>0:
            if i == '1':
                ones+=1
            else:
                if ones<=k:
                    k-=ones
                    output+='0'
                else:
                    output += '1'*(ones-k)+'0'+'1'*k
                    k=0
                    ones = 0
        else:
            output+=i
    
    output+='1'*ones
    print(output)

    # s = list(input())
    # ones = 0
    # out = ""
    # l = len(s)
    # for i in range(len(s)):
    #     if k>0:
    #         if s[i] == '1':
    #             if i < l:
    #                 l = i
    #         elif l<ll:
    #             if i-l <= k:
    #                 s[i],s[l] = s[l],s[i]
    #                 k-=i-l
    #                 l+=1
    #             else:
    #                 s[i],s[i-k] = s[i-k],s[i]
    #                 k=0
    # print(*s,sep="")

                

    # # for i in s:
    # #     if k > 0:
    # #         if i == '1':
    # #             ones+=1
    # #         else:
    # #             if k>= ones:
    # #                 out+='0'
    # #                 k-=ones
    # #             else:
    # #                 out+='1'*(ones-k)+'0'+'1'*k
    # #                 k=0
    # #                 ones = 0
    # #     else:
    # #         out+=i
    # # if(k>0):
    # #     out+='1'*ones

    # # print(out)