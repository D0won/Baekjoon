import sys
import math

def is_palindrome(str) :
    stack = []
    check = True
    hlength = len(str) // 2
    length = hlength if len(str) % 2 == 0 else hlength + 1
    for i in range(hlength) :
        stack.append(str[i])

    for i in range(hlength) :
        if str[length + i] != stack.pop() :
                check = False
    return check

s = input()
print(int(is_palindrome(s)))
