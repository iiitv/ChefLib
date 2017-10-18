# Code written by Monal
def main():
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))
    products = []
    answer = 0
    one = 0
    for i in nums:
        if i == 1 and k != 1:
            one += 1
        elif i - k > 0:
            pass
        else:
            size = len(products)
            for j in range(size):
                tmp = i * products[j]
                if tmp - k > 0:
                    pass
                else:
                    answer += 1
                    products.append(tmp)
            products.append(i)
            answer += 1
    answer += (((2**one)-1) * answer)
    answer += (one*(one+1))//2
    print(answer)


if __name__ == '__main__':
    main()
