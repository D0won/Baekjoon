import sys
input = sys.stdin.readline



ct = [0] * 10001
N = int(input())
for _ in range(N) :
    num = int(input())
    ct[num] += 1
l = len(ct)
for idx, c in enumerate(ct):
    if c > 0 :
        for _ in range(c) :
            print(idx)
'''
- counting sorting 기법을 이용하여 1부터 10000까지의 인덱스를 가진 리스트를 생성 후(주어진 조건에서 입력받는 수의 범위가 1 - 10000)
어떠한 수를 받으면 그 수에 따른 인덱스에 해당하는 값을 +1 해준다.
그리고 마지막에 1 - 10000까지의 리스트를 통해 인덱스를 이에 해당하는 값만큼 반복하여 출력한다.
'''