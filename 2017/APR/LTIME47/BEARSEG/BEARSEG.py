# Code written by Monal
def sum_of_subsequences(n, p):
    arr = list(map(int, input().split()))
    maxi = 0
    occ = 0
    for i in range(n):
        curr_sum = 0
        for j in range(i, n):
            curr_sum = curr_sum + arr[j]
            if curr_sum % p > maxi:
                maxi = curr_sum % p
                occ = 1
            elif curr_sum % p == maxi:
                occ += 1
    print(maxi, occ)


def main():
    tc = int(input())
    for _ in range(tc):
        n, p = map(int, input().split())
        sum_of_subsequences(n, p)


if __name__ == '__main__':
    main()
