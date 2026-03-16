import sys
import math
input = sys.stdin.readline

sieve = [1] * 1000001
sieve[0], sieve[1] = 0, 0
i = 2
while i <= 1000000 :
    if sieve[i] == 0 :
        i += 1
        continue 
    t = i * i
    while t <= 1000000 :
        sieve[t] = 0
        t += i
    i += 1

N, M = map(int, input().split())

for i in range(N, M + 1) :
    if sieve[i] == 1 :
        print(i)



'''
- 알고리즘
 에라토스테네스의 체와 리스트의 인덱스를 활용하여 인덱스 1부터 100만까지 소수이면 1, 아니면 0을 넣는다.
작성한 코드에서는 처음에 i = 2부터 시작하여 1씩 점차 늘어나며 sieve[i]의 값이 0이면 i+1로 넘어간다.
그리고 만약 sieve[i]의 값이 1이면  sieve[i배수]는 다 값을 0으로 바꾸어 에라토스테네스의 체를 완성시킨다.
본 코드에서는 N부터 M+1까지의 수를 sieve의 인덱스값으로 넣고 만약 1(소수)이면 출력한다. 
'''
