# made by vanguard7


def main():
    t = int(input())
    for i in range(t):
        l = list(input())
        six = l.count('6')
        seven = l.count('7')
        eight = l.count('8')
        if six != 0:
            if '5' in l:
                print("A", end="")
            if six > 1:
                print("B", end="")
            if seven != 0:
                print("C", end="")
            if eight != 0:
                print("D", end="")
            if '9' in l:
                print("E", end="")
        if seven != 0:
            if '0' in l:
                print("F", end="")
            if '1' in l:
                print("G", end="")
            if '2' in l:
                print("H", end="")
            if '3' in l:
                print("I", end="")
            if '4' in l:
                print("J", end="")
            if '5' in l:
                print("K", end="")
            if six != 0:
                print("L", end="")
            if seven > 1:
                print("M", end="")
            if eight != 0:
                print("N", end="")
            if '9' in l:
                print("O", end="")
        if eight != 0:
            if '0' in l:
                print("P", end="")
            if '1' in l:
                print("Q", end="")
            if '2' in l:
                print("R", end="")
            if '3' in l:
                print("S", end="")
            if '4' in l:
                print("T", end="")
            if '5' in l:
                print("U", end="")
            if six != 0:
                print("V", end="")
            if seven != 0:
                print("W", end="")
            if eight > 1:
                print("X", end="")
            if '9' in l:
                print("Y", end="")
        if '9' in l:
            if '0' in l:
                print("Z", end="")
        print()


if __name__ == '__main__':
    main()
