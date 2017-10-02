# made by vanguard7
def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        if n % 2 == 0:
            for j in range(1, (n // 2) + 1):
                print("{} {} ".format(2 * j, 2 * j - 1), end="")
            print()
        else:
            for j in range(1, (n // 2) + 1):
                if 2 * j - 1 != n - 2:
                    print("{} {} ".format(2 * j, 2 * j - 1), end="")
                else:
                    print("{} {} ".format(2 * j, 2 * j + 1), end="")
            print(n - 2)


if __name__ == '__main__':
    main()
