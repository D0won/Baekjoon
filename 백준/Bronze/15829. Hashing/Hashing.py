import sys
input = sys.stdin.readline

N = int(input())
en = list(input().strip())
en_h = [((ord(e) - 96)* (31 ** i))  for i,e in enumerate(en, start = 0)]
print(sum(en_h) % 1234567891)

           
    

    