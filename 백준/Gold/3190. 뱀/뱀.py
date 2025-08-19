import sys
from collections import deque

N = int(sys.stdin.readline())
K = int(sys.stdin.readline())

board = [[0] * N for _ in range(N)]

for _ in range(K):
    R, C = map(int, sys.stdin.readline().split())
    board[R - 1][C - 1] = 2  # 사과는 2로 표시

L = int(sys.stdin.readline())
directions = deque()
for _ in range(L):
    X, C = sys.stdin.readline().split()
    directions.append((int(X), C))

# 뱀의 초기 위치와 방향
snake = deque([(0, 0)])
board[0][0] = 1  # 뱀의 몸통은 1로 표시
time = 0
x, y = 0, 0

# 동, 남, 서, 북
dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]
d = 0 # 초기 방향: 동쪽

while True:
    time += 1
    
    # 다음 머리 위치
    nx = x + dx[d]
    ny = y + dy[d]

    # 게임 종료 조건 (벽 또는 자기 몸통에 부딪힘)
    if not (0 <= nx < N and 0 <= ny < N and board[nx][ny] != 1):
        break
    
    # 사과가 있는 경우
    if board[nx][ny] == 2:
        board[nx][ny] = 1
        snake.append((nx, ny))
    # 사과가 없는 경우
    else:
        board[nx][ny] = 1
        snake.append((nx, ny))
        tail_x, tail_y = snake.popleft()
        board[tail_x][tail_y] = 0

    x, y = nx, ny
    
    # 방향 전환 시간인지 확인
    if directions and directions[0][0] == time:
        X, C = directions.popleft()
        if C == 'L':
            d = (d - 1 + 4) % 4
        else: # 'D'
            d = (d + 1) % 4

print(time)