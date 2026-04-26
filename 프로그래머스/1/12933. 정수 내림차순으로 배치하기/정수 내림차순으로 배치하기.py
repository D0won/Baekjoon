def solution(n):
    # n을 문자열로 번경 한 다음 내림차순으로 정렬한 후 ''으로 join한다.
    answer = ''.join(sorted(str(n),reverse = True)) 
    
    # 타입을 integer로 바꾼 후 반환
    return int(answer)