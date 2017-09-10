def main():
    N = int(input())
    for _ in range(N):
        y = [int(x) for x in input().split()]
        length = len(y)
        maxm = max(y)
        if maxm == length-1:
            y.remove(maxm)
        print(max(y))


if __name__ == '__main__':
    main()
