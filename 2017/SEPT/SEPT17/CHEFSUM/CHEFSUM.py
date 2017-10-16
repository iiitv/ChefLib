# Made by Piyush
def main():
    testCases = int(input())
    for _ in range(testCases):
        l = int(input())
        arr = list(map(int, input().split()))
        print(arr.index(min(arr)) + 1)

if __name__ == '__main__':
    main()
