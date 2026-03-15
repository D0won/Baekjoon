import sys
input = sys.stdin.readline

isbn = input().strip()
starIdx = 0
sumIsbn = 0
for idx, n in enumerate(isbn) :
    if n == '*' :
        starIdx = idx
        continue
    if idx % 2 == 0 :
        sumIsbn += int(n)
    else :
        sumIsbn += int(n) * 3

if starIdx % 2 == 0 :
    print(10 - sumIsbn % 10) # 만약 *를 제외한 수를 다 규칙대로 더하고 10으로 나머지를 구했을 때 k가 나온다면 *를 포함한 모든 값을 규칙대로 다 더해서 10으로 나누면 0이 되어야하므로 * = 10 - k이다.
else :
    for i in range(10) :
        if (sumIsbn + 3 * i) % 10 == 0 :
            print(i)
            break 
'''
알고리즘 : 
먼저 isbn의 수를 '/n' 없이 받은 다음 만약 *이 있다면 인덱스만 따로 저장하고 나머지는 규칙대로 다 합한다.
그리고 만약 *의 인덱스가 홀수라면 *을 제외한 합한 수의 나머지를 10에서 뺀다.
민약 *의 인덱스가 짝수라면 0~9까지의 수를 다 넣어본 후 맨 처음 조건을 만족한 수를 출력한다.
'''