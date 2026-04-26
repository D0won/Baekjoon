def solution(numer1, denom1, numer2, denom2):
    answer = []
    d1, d2 = denom1, denom2
    n1, n2 = 0, 0
    d = 0
    
    # 두 분모의 최소공배수를 찾고 최소공배수는 d에 저장
    # 곱한 i와 j를 각 n1,n2 변수에 저장
    for i in range(1, denom2+1) :
        for j in range(1, denom1+1) :
            if d1 * i == d2 * j :
                d = d1 * i
                n1,n2 = i,j
                break
        else :
            continue
        break
        
    # 기약 분수 만들기
    num = numer1*n1 + numer2 * n2
    k = 1
    z = d if num > d else num
    for i in range(z, 1, -1) :
        if num % i == 0 and d % i == 0 :
            num //= i
            d //= i
            break
    
    # for문에서 각 분모에 곱햇던 수를 각 분자에도 곱하여 더함.
    answer.append(num)
    answer.append(d)
    return answer