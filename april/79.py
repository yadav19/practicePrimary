n,x,y = map(int,input().split())
a = input().replace('1',' ').split()
if(len(a)>=2):
    print(min(x,y)*(len(a)-1) + y)
else print(0)