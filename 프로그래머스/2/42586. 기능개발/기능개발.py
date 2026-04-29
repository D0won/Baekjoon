from collections import deque

def solution(progresses, speeds):
    # 원할한 연산을 위해 deque 자료형으로 변환
    prog = deque(progresses)
    speed = deque(speeds)
    answer = []
    
    while len(prog) != 0:
        # 매 반복마다(하루마다) 해당 작업의 개발 속도를 더함
        p_l = len(prog)
        for i in range(p_l) :
            prog[i] += speed[i]
        # 반복마다 더해진 작업들을 deque 자료형의 popleft() 함수를 통해 매 첫번째 원소가
        # 작업 진도가 100 이상인지 확인하고 100 이상이면 popleft()를 수행, 
        # 아니면 다시 반복을 진행한다.
        func = 0
        while len(prog) != 0 and prog[0] >= 100 :
            prog.popleft()
            speed.popleft()
            func += 1
        # 만약에 기능의 수가  1 이상인 경우 answer에 append한다.
        if func >= 1 :
            answer.append(func)
        
    return answer