# Code by xdaimon / Bradley Bauer
def is_rainbow(A, N):
    # Assume array is a rainbow
    rainbow = True

    increments = 1
    prev_number = A[0]
    for n in range((N + 1) // 2):
        if not A[n] == A[-n - 1]:
            rainbow = False
            break
        elif not 0 <= A[n] - prev_number <= 1:
            rainbow = False
            break
        elif not 1 <= A[n] <= 7:
            rainbow = False
            break

        if A[n] - prev_number == 1:
            increments += 1
        prev_number = A[n]

    # Array must contain one of each digit from 0 to 7
    if increments != 7:
        rainbow = False

    return rainbow


def main():
    # Get number of test cases
    T = int(input())

    # Process test cases
    for t in range(T):

        N = int(input())
        A = input().split()
        for i in range(len(A)):
            A[i] = int(A[i])

        if is_rainbow(A, N):
            print("yes")
        else:
            print("no")


if __name__ == '__main__':
    main()
