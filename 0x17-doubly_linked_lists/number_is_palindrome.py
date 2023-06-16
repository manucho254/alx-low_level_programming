#!/usr/bin/python3

seen = []

for x in range(100, 1000):
    for i in range(x, 1000):
        tmp = str(x * i)
        if tmp == tmp[::-1]:
            seen.append(x * i)

print(max(seen))
