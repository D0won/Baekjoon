import sys
input = sys.stdin.readline
num = list(map(int, input().split()))
d = 0
check = 1
for i, val in enumerate(num[1:], start = 1) :
    d = (num[i] - num[i - 1])
    if d >  1 or d < -1 :
        check = 0
    
if d == 1 and check == 1:
    print("ascending")
elif d == -1 and check == 1:
    print("descending")
else :
    print("mixed")
    

    