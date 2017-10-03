# Code written by Monal
def main():
    tc = int(input())
    for _ in range(tc):
        l, r = map(int, input().split())
        count = 0
        given = list(map(int, input().split()))
        tmp = [0] * 10
        if len(set(given).intersection(tmp)) == 10:
            for i in range(l, r+1, 1):
                s = str(i)
                if len(s) >= 10:
                    passer = True
                    occ = [0] * 10
                    for digit in s:
                        occ[int(digit)] += 1
                    for digit in range(10):
                        if occ[digit] == given[digit]:
                            passer = False
                            break
                    if passer:
                        count += 1
        else:
            for i in range(l, r+1, 1):
                passer = True
                occ = [0] * 10
                s = str(i)
                for digit in s:
                    occ[int(digit)] += 1
                for digit in range(10):
                    if occ[digit] == given[digit]:
                        passer = False
                        break
                if passer:
                    count += 1
            print(count)


if __name__ == '__main__':
    main()
