# Code written by Divyesh
def main():
    t = int(input())
    while t > 0:
        l = []
        l1 = []
        for x in range(4):
            str, n = input().split()
            l.append(str)
            l1.append(n)
        r = l.index("RealMadrid")
        b = l.index("Barcelona")
        m = l.index("Malaga")
        e = l.index("Eibar")
        if l1[r] < l1[m] and l1[e] < l1[b]:
            print("Barcelona")
        else:
            print("RealMadrid")
        t = t - 1


if __name__ == '__main__':
    main()
