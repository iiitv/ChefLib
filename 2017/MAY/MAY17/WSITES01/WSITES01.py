# Code written by Monal
def calculate(check, yes):
    for i in range(len(check)):
        temp = check[0:i+1]
        j = 0
        for _ in range(len(yes)):
            if i > len(yes[j]):
                j += 1
                continue
            if temp == yes[j][0:i+1]:
                break
            j += 1
        if j == len(yes):
            return temp
    return 'NO'


def main():
    n = int(input())
    yes = []
    no = []
    answer = []
    for _ in range(n):
        ch, temp = input().split()
        if ch == '-':
            no.append(temp)
        else:
            yes.append(temp)
    for i in no:
        temp = calculate(i, yes)
        if temp != 'NO':
            answer.append(temp)
    if len(answer) != len(no):
        print('-1')
    else:
        ouput = set(answer)
        print(len(ouput))
        print('\n'.join(sorted(ouput)))


if __name__ == '__main__':
    main()
