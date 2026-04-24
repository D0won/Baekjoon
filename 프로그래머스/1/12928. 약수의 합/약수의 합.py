def solution(n):
    answer = 0
    half = int(n ** (1/2)) + 1 # n의 제곱근의 정수부분에 1을 더한 값을 구한다.
    # 1~ n의 제곱근까지 n으로 나눴을 때 나머지가 0이면 answer에 더한다.
    for i in range(1,half) :
        if n % i == 0 :
            answer += i
            # 만약에 i와 n // i가 중복이 아니라면 n // j도 더한다.
            if i != n // i :
                answer += n // i
    return answer