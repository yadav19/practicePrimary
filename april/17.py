A = [3**i for i in range(40)]

m = sum(A)
t= int(input())

for _ in range(t):
    n = int(input())
    x = m

    for p in A[::-1]:
        if x-p>=n:
            x-=p
    
    print(x)