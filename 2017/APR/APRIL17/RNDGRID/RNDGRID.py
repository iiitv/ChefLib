# Code written by Monal
def main():
    tc = int(input())
    for _ in range(tc):
        l, n = map(int, input().split())
        moves = input()
        matrix = []
        for i in range(n):
            matrix.append(input())
        answer = 0
        for i in range(n):
            for j in range(n):
                ci = i
                cj = j
                count = 0
                if matrix[i][j] == '.':
                    for s in moves:
                        if s == 'D':
                            if ci + 1 == n:
                                break
                            elif matrix[ci + 1][cj] == '.':
                                count += 1
                                ci += 1
                            else:
                                break
                        if s == 'U':
                            if ci == 0:
                                break
                            elif matrix[ci - 1][cj] == '.':
                                count += 1
                                ci -= 1
                            else:
                                break
                        if s == 'L':
                            if cj == 0:
                                break
                            elif matrix[ci][cj - 1] == '.':
                                count += 1
                                cj -= 1
                            else:
                                break
                        if s == 'R':
                            if cj + 1 == n:
                                break
                            elif matrix[ci][cj + 1] == '.':
                                count += 1
                                cj += 1
                            else:
                                break
                if count == 0:
                    pass
                else:
                    if answer == 0:
                        answer = count
                    else:
                        answer = answer ^ count
        print(answer)


if __name__ == '__main__':
    main()
