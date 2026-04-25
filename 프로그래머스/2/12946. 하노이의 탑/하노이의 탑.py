def solution(n):
    answer = []
    def hanoi(start, mid, end, n) :
        if n == 1 :
            answer.append([start, end])
            return
        # 첫번째 기둥에서 (n-1) 원판들을 마지막 기둥을 거쳐 중간 기둥으로 옮긴다.
        hanoi(start, end, mid, n - 1)
        # 마지막에 있던 원판을 첫번째 기둥에서 마지막 기둥으로 옮긴다.
        answer.append([start, end])
        # 나머지 중간 기둥에 있던 (n-1)만큼의 원판을 첫번째 기둥을 거쳐 마지막 기둥으로 옮긴다.
        hanoi(mid, start, end, n - 1)
    hanoi(1,2,3,n)
    return answer