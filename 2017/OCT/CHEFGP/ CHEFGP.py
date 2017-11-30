t = int(input())
while t > 0:
    s = input()
    w = ""
    x, y = map(int, input().split())
    na = s.count("a")
    nb = s.count("b")
    if na > nb:
        smax = "a"
        smin = "b"
    else:
        smax = "b"
        smin = "a"
        tamp = na
        na = nb
        nb = tamp
        tamp = x
        x = y
        y = tamp
    h = ""
    xa = na / x
    mini = int(min(xa, nb))
    h = h + smax * x
    h = h + smin
    w = w + h * mini
    ra = na - mini * x
    rb = nb - mini
    if ra < x and ra > 0:
        w = w + smax * ra
        if rb != 0:
            w = w + smin
            rb -= 1
    elif ra >= x:
        k = x
        i = 0
        while i < ra:
            if k == 0:
                w = w + "*"
                k = x
            else:
                w = w + smax
                k -= 1
                i += 1
    if rb < y and rb > 0:
        w = w + smin * rb
    elif rb >= y:
        if smin == "b":
            c = 'b'
        else:
            c = 'a'
        l = len(w)
        i = int(1)
        while rb > 0 and i < l:
            if w[i] != c:
                w = w[:i] + smin + w[i:]
                i += 1
                rb -= 1
                l += 1
            else:
                i += 1
            i += 1
    print(w)
    t -= 1
