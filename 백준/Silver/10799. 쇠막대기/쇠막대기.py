import sys

s = input()
stack = []
iron = 0
ironsum = 0
stick = 0
plus = False
minus = False
for i in s :
    if i == '(' :
        if plus == True :
            iron+= 1
            ironsum +=1
        minus = False
        plus = True
    else :
        if minus == True :
            iron-= 1
        else :
            stick += iron
        plus = False
        minus = True
print(stick + ironsum)