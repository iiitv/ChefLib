# Code written by Divyesh
import collections
import itertools
def main():
    n, k, p = input().split()
    arr = list(map(int, input().split()))
    str = input()
    y = 0
    u = 0
    for x in str:
        if x == "!":
            u = u + 1
            y = 0
        else:
            arr = collections.deque(arr)
            arr.rotate(u)
            for x in range(abs(int(n)-int(k)+1)):
                ans = list(itertools.islice(arr, x, x+int(k))).count(1)
                if ans > y:
                    y = ans
            u = 0        
            print (y)

if __name__ == '__main__':
    main()                       
