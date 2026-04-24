def solution(n, s) :
    answer = [] # 원소를 저장하는 리스트
    minus = [-1] # 만약에 n개의 자연수로 합 s를 만들지 못할 시 반환하는 값
    mid = s // n # 중앙값
    rest = s % n # 나머지
    
    # 나머지값만큼 중앙값 + 1을 리스트에 삽입한다.
    for _ in range(rest) :
        answer.append(mid+1)
        
    # 그 외는 중앙값을 리스트에 삽입한다.
    for _ in range(n - rest) :
        answer.append(mid)
    # 정렬
    answer.sort()
    # 만약 0이 리스트 안에 있다면 [-1] 을 반환 아니라면 리스트를 반환
    if 0 in answer :
        return minus
    else :
        return answer