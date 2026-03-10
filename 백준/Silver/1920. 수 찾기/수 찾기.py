import sys
input = sys.stdin.readline


N = int(input())
nums = set(map(int, input().split()))
M = int(input())
for i, num2 in  enumerate(map(int, input().split())) :
    if i == M :
        break
    if num2 in nums :
        print(1)
    else :
        print(0)

'''
- 알고리즘
 파이썬 내장 자료구조인 set 구조를 이용하여 N만큼의 숫자를 받고 set의 특징인 중복된 값을 넣지 못하는 것을 이용한다.
만약 nums(set) 안에 num2가 있다면 1 출력, 없다면 0을 출력한다.
+) AI
 set 자료구조를 추천해주었다.
'''