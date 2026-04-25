def solution(n):
    answer = []
    def hanoi(start, mid, end, n) :
        if n == 1 :
            answer.append([start, end])
            return
        hanoi(start, end, mid, n - 1)
        answer.append([start, end])
        hanoi(mid, start, end, n - 1)
    hanoi(1,2,3,n)
    return answer