t = int(input())
for i in range(t):
    n,x,y = map(int ,input().split())
    a = min(x,y)
    b = max(x,y)
    b = b - a + 1
    a = 1 
    if (n%2 == 0 and n/2 == b-a) or (b - a == 1 or b == n):
        print("0")
    else:
        if b > n/2 + 1:
            print(n - b)
        elif b < n/2 + 1:
            print(b - 2)
