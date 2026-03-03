import sys
input = sys.stdin.readline

T = int(input()) 

for _ in range(T) :
    K = int(input())
    N = int(input())
    floor = list(range(1, N+1))    
    for k in range(K) :
        for i, n in enumerate(floor) :
            if i > 0 :
                floor[i] += floor[i-1]


    print(floor[N-1])

'''
- 이중반복문을 이용한 덧셈 규칙
먼저, 호수는 1부터 시작하므로 1~N(입력값)까지 floor 리스트에 넣는다.(0층은 1,2,3,4, ... , N)
그 다음 1호를 제외한 나머지 호수값에 이전 호수값을 더한다.
이를 K번 반복한 후 호수(N)의 값을 출력한다.
'''
    
