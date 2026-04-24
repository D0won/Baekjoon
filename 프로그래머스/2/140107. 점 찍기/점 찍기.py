def solution(k, d): 
    answer = 0
    # (x,y)라고 하자.
    # x는 최대 d까지 k만큼의 거리로 가기 때문에
    # 각 x의 값마다 점의 개수를 for문으로 구하면 된다.
    # 이 때 각 x마다 d^2 - a^2를 k로 나눈 정수 부분에 1을 더하면
    # 원점으로부터 점이 총 몇 개 있는지 구할 수 있다.
    for a in range(0, d+1, k) :
        answer += (((d**2 - a**2)**(1/2)) // k) + 1
    return answer
