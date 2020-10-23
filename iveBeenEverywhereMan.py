cases = int(input())
t = "a"*cases
for i in t:
    s=[]
    trips = int(input())
    n = "a"*trips
    cities = list()
    for i in n:
        city = input()
        cities.append(city)
        for i in cities:
            if i not in s:
                 s.append(i)
                 places=len(s)
    print(places)
