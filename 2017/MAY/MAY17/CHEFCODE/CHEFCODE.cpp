// Code written by Monal
#include "bits/stdc++.h"
    
using namespace std;
 
#define l long int
#define ll long long int
#define ull unsigned long long int
#define intwo(n, k) cin>>n>>k
#define inone(tmp) cin>>tmp
#define out(a) cout<<a
#define forn(n) for (int i = 0; i < n; ++i)
#define pb(tmp) products.push(tmp)
#define po() products.pop()
#define pf() products.front()
 
 
queue < ull > products;
 
void update(ull k, ull inp) {
    int size = products.size();
    forn(size) {
        ull popped = pf();
        po();
        ull tmp = inp * popped;
        pb(popped);
        if(tmp <= k)   // If product with previous elements is less
            pb(tmp);
    }
}
 
 
void solve(int n, ull k) {
    forn(n) {
        ull tmp;
        inone(tmp);
        if (tmp <= k) {
            update(k, tmp);
            pb(tmp);
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ull k;
    intwo(n, k);
    solve(n, k);
    out(products.size());
    return 0;
}
