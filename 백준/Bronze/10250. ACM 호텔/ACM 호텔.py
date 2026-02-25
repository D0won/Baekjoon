import sys
input = sys.stdin.readline
T = int(input())

for _ in range(T) :
    a, b, c = map(int, input().split())
    floor = c % a
    room  = (c // a) + 1
    if floor == 0 :
        floor = a
        room -= 1
    print(f"{floor}{room:02d}")
    