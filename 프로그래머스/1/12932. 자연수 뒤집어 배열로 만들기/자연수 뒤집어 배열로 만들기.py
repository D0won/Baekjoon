def solution(n):
    answer = []
    nl = len(str(n))
    for i in range(1, nl+1) :
        answer.append(n % (10))
        n //= 10
    return answer