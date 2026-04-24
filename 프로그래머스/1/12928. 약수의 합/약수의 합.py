def solution(n):
    answer = 0
    half = int(n ** (1/2)) + 1
    for i in range(1,half) :
        if n % i == 0 :
            answer += i
            if i != n // i :
                answer += n // i
    return answer