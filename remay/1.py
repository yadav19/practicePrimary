import re
for _ in range(int(input())):
    x= input()
    xr = r"R\d+C\d+"
    if re.match(xr,x):
        a,bi = map(int,re.findall(r"\d+",x))# = map(int,x[1:].split("C"))
        b=""
        while bi:
            bi-=1;b=chr(bi%26+65)+b;bi//=26
        print(f"{b}{a}")
    else: 
        a=0;b=0
        for c in x:
            if c.isdigit(): b=b*10+int(c)
            else: a = a*26 + ord(c)-64
        print(f"R{b}C{a}")