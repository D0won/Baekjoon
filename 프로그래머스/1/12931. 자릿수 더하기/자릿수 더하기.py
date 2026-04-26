def solution(n):
    answer = 0
    # 최대 범위가 1억이므로 8을 점차 1로 빼면서
    # n을 1억, 1000만, 100만, 10만,... 이렇게 나눈 값을 더한다.
    # 참고로 이때 n을 위의 값으로 나눈 후에는 무조건 같은 값으로 나머지를 n에 대입힌다.
    for i in range(9) :
        answer += n // (10**(8-i))
        n %= (10**(8-i))

    return answer