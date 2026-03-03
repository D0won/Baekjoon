import sys
input = sys.stdin.readline

def gcd(m,n) :
    if n == 0 :
        return m
    if m % n == 0 :
        return n
    else :
        return gcd(n, m % n)

n1, n2 = map(int, input().split())

if n1 > n2 :
        n1, n2 = n2, n1
q = gcd(n1, n2)
print(q)
print(n1*n2 // q)

    

    