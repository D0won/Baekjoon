import sys


def divideThree(n):
    if n == 1:
        return "-"
    else:
        left = divideThree(n // 3)
        center = " " * (n // 3)  # 공백은 함수가 스택에 쌓이는 대로
        return left + center + left  # - 는 함수가 스택에 빠져나가는 대로


while True:

    try:
        N = int(sys.stdin.readline())
        print(divideThree(3 ** N))
    except:
        break
