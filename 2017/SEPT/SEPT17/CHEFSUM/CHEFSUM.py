# made by vanguard7
def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        low = 10000000000000000000000000000000000000000000
        index = -1
        l = list(map(int, input().split()))
        temp = sum(l)
        temp2 = 0
        for j in range(0, n):
            temp2 += l[j]
            if temp + temp2 < low:
                index = j + 1
                low = temp + temp2
            temp -= l[j]
        print(index)


if __name__ == '__main__':
    main()
