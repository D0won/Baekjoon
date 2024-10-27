import sys

def tripleStar(n) :
    if n == 1:
        return "*"
    
    stars = tripleStar(n // 3)
    star = []
    for s in stars :
        star.append(s*3)
    for s in stars :
        star.append(s + ' '*(n//3) + s)
    for s in stars :
        star.append(s*3)
    
    return star

N = int(sys.stdin.readline())
print('\n'.join(tripleStar(N)))
