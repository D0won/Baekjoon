def solution(n):
    answer = []
    nl = len(str(n)) # n의 길이를 구한다.
    
    # n의 길이만큼 10을 나눈 나머지를 answer에 추가하고
    # 그리고 n을 10만큼 나눈다.
    for i in range(1, nl+1) :
        answer.append(n % (10))
        n //= 10
    return answer