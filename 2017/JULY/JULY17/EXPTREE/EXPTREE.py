#__BY:sirjan13__


def gcd(n,m):
    if n == 0:
        return m
    return gcd(m % n, n)


t1, t2=0, 0


def egcd(a, b):
    x, y, u, v = 0, 1, 1, 0 	 	 
    while a != 0:
        q, r = b//a, b % a
        m, n = x-u*q, y-v*q
        b, a, x, y, u, v = a, r, u, v, m, n
    gc = b
    return gc, x, y


def mi(a,m):
    g = egcd(a,m)
    ans = (g[1] % m + m) % m
    return ans

 
mod1 = 10**9+7
mod2 = mod1 + 2
for cppp in range(int(raw_input())):
    n = int(raw_input())
    if n == 0:
        print "0 0"
    else:
        n1 = n
        n2 = n1-1
        tree = 2*n-3
        if (n1 & 1):
            (n2) = (n2)/2
        else:
            (n1) = (n1)/2
        f = gcd(n1, tree)
        n1 = n1//f
        tree = tree//f
        s = gcd(n2, tree)
        n2 = n2//s
        tree = tree//s
        ans1 = ((n1 % mod1)*(n2 % mod1)) % mod1
        ans1 = ans1 % mod1
        ans2 = ((n1 % mod2)*(n2 % mod2)) % mod2
        ans2 = ans2 % mod2
        i = mi(tree, mod1)
        j = mi(tree, mod2)
        a = ((ans1 % mod1)*(i % mod1)) % mod1
        b = ((ans2 % mod2)*(j % mod2)) % mod2
        print a, b
