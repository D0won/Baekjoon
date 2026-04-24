def solution(n, s):
    answer = []
    minus = [-1]
    mid = s // n
    rest = s % n
    plus = 0
    for i in range(rest) :
        answer.append(mid+1)
    for i in range(n - rest) :
        answer.append(mid)
    answer.sort()
    if 0 in answer :
        return minus
    else :
        return answer