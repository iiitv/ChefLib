#made by DipanshKhandelwal
#this is a python3 file


def main():
    N = int(input())
    for _ in range(N):
        maxfreq = 0
        presentfreq = 0
        present = '='
        string = input()
        for i in string :
            if i == '>' or i == '<':
                if i == present :
                    presentfreq +=1
                else:
                    present = i
                    presentfreq = 1
            if presentfreq > maxfreq:
                maxfreq = presentfreq
        print (maxfreq+1)


if __name__ == '__main__':
    main()
