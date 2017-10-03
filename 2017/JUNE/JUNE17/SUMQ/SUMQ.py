# code written by Monal
def main():
    tc = int(input())
    for _ in range(tc):
        p, q, q = map(int, input().split())
        a = tuple(map(int, input().split()))
        b = tuple(map(int, input().split()))
        c = tuple(map(int, input().split()))

        # print(a,b,c)
        answer = 0

        for y in b:
            for x in a:
                if x <= y:
                    tmp = (x + y)
                    # print(tmp)
                    for z in c:
                        if z <= y:
                            # print(z)
                            answer += (tmp * (y + z))
        print(answer % 1000000007)


if __name__ == '__main__':
    main()
