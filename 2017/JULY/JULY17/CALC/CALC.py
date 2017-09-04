# made by vanguard7

from math import ceil


def main():
    t = int(input())
    while t > 0:
        n, b = map(int, input().split())
        a = ceil(float(n // b) / float(2))
        temp = n - (a * b)
        maxm = temp * a
        print(maxm)
        t -= 1


if __name__ == '__main__':
    main()
