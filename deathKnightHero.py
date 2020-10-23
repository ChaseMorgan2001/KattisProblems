n = int(input())
x=0
for i in range(0, n):
    sequence = input()
    if (sequence.count("CD")>= 1):
        x += 1
print(n-x)
