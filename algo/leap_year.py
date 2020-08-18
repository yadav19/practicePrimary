def leap(n):
    if(n%4==0 and (n%100!= 0 or n%400==0)):
        return "YES"
    else:
        return "NO"

if __name__ == "__main__":
    t=int(input())
    s=leap(t)
print(s)            
