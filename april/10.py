n,m = map(int,input().split())
A = list(map(int,input().split()))
B = list(map(int,input().split()))
B.sort()
p = set([(B[0] - a + m)%m for a in A])

for x in p:
    tmp = [(a+x)%m for a in A]
    tmp.sort()
    if tmp == B:
        print(x)
        break


