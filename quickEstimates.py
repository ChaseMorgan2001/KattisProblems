n = int(input())
num = n* 'a'
dig = list()
for i in num:
    cost = input()
    dig.append(len(cost))
for i in dig:
    print(i)
