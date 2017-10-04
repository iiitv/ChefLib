# code written by Monal
def main():
    tc = int(input())
    for _ in range(tc):
        string = input()
        init = string[0]
        count_up = 0
        count_down = 0
        tmp = 0
        inc = False
        n = len(string)
        while tmp < n:
            while tmp < n and string[tmp] == 'U':
                tmp += 1
                inc = True
            if inc:
                count_up += 1
            inc = False
            while tmp < n and string[tmp] == 'D':
                tmp += 1
                inc = True
            if inc:
                count_down += 1
        print(min(count_down, count_up))


if __name__ == '__main__':
    main()
