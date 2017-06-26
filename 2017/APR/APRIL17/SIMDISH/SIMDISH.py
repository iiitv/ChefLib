# Code written by Monal
t = int(input())
for _ in range(t):
    first = input().split()
    second = input().split()
    count = 0
    passer = False
    for i in first:
        if i in second:
            count += 1
        if 2 * count == len(first):
            print('similar')
            passer = True
            break
    if not passer:
        print('dissimilar')
