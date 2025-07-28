import sys

N, K = map(int,sys.stdin.readline().split())
money = []

for m in range(N) :
    money.append(int(sys.stdin.readline()))

money = sorted(money, reverse=True)

n = 0
for m in money :
    n += K // m
    K %= m

print(n)