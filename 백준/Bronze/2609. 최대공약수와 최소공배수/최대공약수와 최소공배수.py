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

'''
- 유클리드 호제법(최대공약수)
두 수 n1, n2(n1 > n2)와 두 수의 나머지(r)을 구하는 함수 f(n1, n2) = n1 % n2가 있다고 하자.
나머지(r)가 0이 될 떄까지 다음과 같은 과정을 거친다.

먼저, f(n1, n2) 함수를 통해 r을 구한다.
r이 0이 아니라면 f 함수에 n2, r을 순서대로 넣어 f(n2, r) = r을 다시 한번 구한다.
이 과정을 반복하여 r = 0이 될 때 n2가 처음 두 수의 최대공약수이다.

- 최소공배수
최소공배수는 구하기 매우 간단하다.
처음 두수 n1, n2을 서로 곱한 후 두 수의 최대공약수를 나누면 된다.
'''
