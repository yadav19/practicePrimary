n =int(input())
a = sorted(list(map(int,input().split())))
b = sorted(list(map(int,input().split())))[::-1]
print(sum([a[i]*b[i] for i in range(n)]))

"""