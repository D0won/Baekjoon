import sys
arr = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
word = sys.stdin.readline().rstrip()
for i in arr :
    word = word.replace(i, "a")
print(len(word))