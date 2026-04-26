def solution(n):
    answer = 0
    for i in range(10) :
        answer += n // (10**(9-i))
        n %= (10**(9-i))
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.

    return answer