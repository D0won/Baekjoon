import sys

N, M = map(int, sys.stdin.readline().split())
baguni = list(range(1, N + 1))
for _ in range(M):
    i, j = map(int, sys.stdin.readline().split())
    temp = baguni[i - 1 : j]
    temp.reverse()
    baguni[i - 1 : j] = temp

for i in range(N):
    print(baguni[i], end=" ")
