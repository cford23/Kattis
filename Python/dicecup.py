n, m = input().split()
n = int(n)
m = int(m)
probs = [0] * (n + m + 1)

for k in range(1, n + 1):
    for i in range(1, m + 1):
        probs[k + i] += 1

maxNum = max(probs)

for p in range(1, len(probs)):
    if probs[p] == maxNum:
        print(p)