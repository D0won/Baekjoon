import sys

# 장부 자료 수 입력받기
N = int(sys.stdin.readline().rstrip())

# 스택 자료형 선언
stack = list()

# 장부 자료 수만큼 반복 
for _ in range(N) : 
    
    # 장부 자료 입력받기
    num = int(sys.stdin.readline().rstrip())
    
    # 스택에 원소가 있고 입력받은 장부 자료가 0일 경우 pop 아니면 자료 추가
    if stack and num == 0 :
        stack.pop()
    else :
        stack.append(num)

# 스택에 원소가 있을 시 합계 출력 아니면 0 출력
if stack :
    print(sum(stack))
else :
    print('0')
