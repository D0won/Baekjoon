import sys 
def factorial_func(n):
    if n <= 1 :
        return 1
    
    return n * factorial_func(n-1)

a = int(sys.stdin.readline())
print(factorial_func(a))