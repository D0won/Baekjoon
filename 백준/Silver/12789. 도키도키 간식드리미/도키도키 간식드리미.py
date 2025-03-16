import sys
from collections import deque

N = int(sys.stdin.readline().rstrip()) # 학생들의 수 입력받기

line = list(map(int, sys.stdin.readline().split())) # 대기줄 번호표 앞에서부터 뒤 순서로 받기

num = 1 # 현재 간식을 받아야하는 번호 변수
stack = list() # 한 명씩만 설 수 있는 공간
for s in line :
    stack.append(s) # 스택에 번호 하나씩 넣기

    # 스택에 원소가 있고 스택의 가장 왼쪽 원소가 num일 경우 pop 그리고 번호표 1 증가
    while stack and stack[-1] == num : 
        stack.pop()
        num += 1
# 스택에 원소가 남아있으면 sad 없으면 nice
if stack :
    print("Sad")
else :
    print("Nice")

