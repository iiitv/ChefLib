def main():
    t = int(raw_input())
    while t:
        t-=1
        n = map(int,raw_input().split())
        q = n[1]
        n = n[0]
        queries = []
        good = []
        ans = 1
        for i in range(n):
            good.append('a')
        good.append('a')
        for i in range(q):
            a = map(int, raw_input().split())
            queries.append(a)
        queries.sort()
        for i in queries:
            if(i[0]==i[1] and i[2]==1):
                ans = 0
                break
            elif(i[0]==i[1] and i[2]==0):
                continue
            else:
                if(good[i[0]]=='a' and good[i[1]]=='a'):
                    if(i[2]==1):
                        good[i[0]]=1
                        good[i[1]]=0
                    else:
                        good[i[0]]=0
                        good[i[1]]=0
                elif(good[i[0]]!='a' and good[i[1]]=='a'):
                    if(good[i[0]]==1):
                        if(i[2]==1):
                            good[i[1]]=0
                        else:
                            good[i[1]]=1
                    else:
                        if(i[2]==1):
                            good[i[1]]=1
                        else:
                            good[i[1]]=0
                elif(good[i[0]]=='a' and good[i[1]]!='a'):
                    if(good[i[1]]==1):
                        if(i[2]==1):
                            good[i[0]]=0
                        else:
                            good[i[0]]=1
                    else:
                        if(i[2]==1):
                            good[i[0]]=1
                        else:
                            good[i[0]]=0
                else:
                    if(abs(good[i[0]] - good[i[1]]) == i[2]):
                        continue
                    else:
                        ans = 0
                        break
        if(ans):
            print "yes"
        else:
            print "no"

if __name__ == '__main__':
    main()