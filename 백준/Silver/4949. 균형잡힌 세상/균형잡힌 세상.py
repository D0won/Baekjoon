import sys

while True :
    s =sys.stdin.readline().strip('\n')
    stack = []
    if s == '.' :
        break
        
    for i in s :
        if i == '(' or i == '[' :
            stack.append(i)
        elif i == ')' :
            if len(stack) > 0 and stack[-1] == '(' :
                stack.pop()
            else :
                stack.append(1)
                break
        elif i == ']' :
            if len(stack) > 0 and stack[-1] == '[' :
                stack.pop()
            else :
                stack.append(1)
                break
    if len(stack) == 0 :
        print('yes')
    else :
        print('no')