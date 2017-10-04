t = int(input())
while t > 0 :
    a = input()
    b = input()
    la = list()
    lb = list()
    la = 26 * [0]
    lb = 26 * [0]
    sa = set()
    sb = set()
    for i in range(len(a)):
        la[ord(a[i]) - ord('a')] += 1
        lb[ord(b[i]) - ord('a')] += 1
        sa.add(a[i])
        sb.add(b[i])
    p = int(1)
    for i in range(26):
        if la[i] > 1 and lb[i] == 0:
            p = 0
            print("A")
            break
        elif sb.issubset(sa) and not(sb.issuperset(sa)):
            print("A")
            p = 0
            break
    if p == 1:
        print("B")
    t -= 1
