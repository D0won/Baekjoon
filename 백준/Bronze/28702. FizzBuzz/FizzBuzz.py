import sys
input = sys.stdin.readline


fizz = [input() for _ in range(3)]
res = 0
next = 0
resIdx = 0
for idx, n in enumerate(fizz) :
    try :
        resIdx,res = idx,int(n)
    except :
        pass

next = res + (3 - resIdx)
if next % 15 == 0 :
    print('FizzBuzz')
elif next % 3 == 0 :
    print("Fizz")
elif next % 5 == 0 :
    print('Buzz')
else :
    print(next)

'''
알고리즘 : 
먼저 fizz 리스트 안에 3개의 문자열을 받는다. 
정수 체계에서 3번 연속 문자열인 경우는 없기 때문에(최대 2번) 3개의 문자열 중 try-except을 통하여 숫자인 것을 찾는다.
그리고 찾은 숫자와 인덱스를 저장하고 그 두개를 이용하여 마지막 수 다음 수를 계산한다.
계산한 수를 4가지 경우의 수를 나눠 출력한다.
'''