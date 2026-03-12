import sys
input = sys.stdin.readline

N, K = map(int, input().split())

res = 1

for i in range(1, N + 1) :
        res *= i
for j in range(1, K+1) :
        res //= j
for k in range(1, (N-K)+1) :
        res //= k
print(res)

'''
- 알고리즘 :
이항계수의 계산법을 활용하여 코드를 작성한다.
먼저 N! 을 계산 후 K!와 (N - K)! 를 나눈다.
'''