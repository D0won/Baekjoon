import sys
input = sys.stdin.readline

N = int(input())
t_ = list(map(int, input().split()))
T, P = map(int, input().split())
t = [a // T if a % T == 0 else a // T + 1 for a in t_]
print(sum(t))
print(N // P, N % P)
           
    

    