# code written by Monal
def main():
    tc = int(input())
    for _ in range(tc):
        n, k = map(int, input().split())
        ans = 0
        tmp = []
        for i in range(n):
            t = list(map(int, input().split()))
            t.remove(t[0])
            t = set(t)
            tmp.append(t)
        for i in range(n-1):
            for j in range(i+1, n):
                if len(tmp[i].union(tmp[j])) == k:
                    ans += 1
        print(ans)


if __name__ == '__main__':
    main()
