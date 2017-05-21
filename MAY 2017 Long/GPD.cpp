// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

#define mod(x)             x%1000000007;
#define MIN(n1, n2 )    ((n1) > (n2) ? (n2) : (n1))
#define MAX(n1, n2 )    ((n1) > (n2) ? (n1) : (n2))
#define MID(s, e)       (s+(e-s)/2)
#define FOR(i, a, b)     int i; for(i=(a);i<(b);i++)
#define FORD(i, a, b)     int i; for(i=(a);i>(b);i--)
#define show(a)            for(i=0;i<sizeof(a);i++) cout<<a[i]<<" ";
#define get(a)            for(i=0;i<sizeof(a);i++) cin>>a[i];
#define scanint(a)         scanf("%d",&a)
#define scanLLD(a)         scanf("%lld",&a)
#define scanstr(s)         scanf("%s",s)
#define scanline(l)     scanf(" %[^\n]",l);

typedef long int BIG;
typedef long long PAPA;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin >> N >> Q;
cin >> R >> key;

for (i = 0; i < N - 1; i++)
{
    cin >> u >> v >> k;
}

int last_answer = 0;

for (i = 0; i < Q; i++)
{
    cin >> t;
    
    // find real value of t
    t ^= last_answer;

    if (t == 0)
    {
        cin >> v >> u >> k;
        
        // find real values for u, v, and k
        u ^= last_answer;
        v ^= last_answer;
        k ^= last_answer;
    }
    else
    {
        cin >> v >> k;

        // find real values for v, and k
        v ^= last_answer;
        k ^= last_answer;
        
        // compute the requested values
        int min_answer = ...
        int max_answer = ...

        // update last_answer
        last_answer = min_answer ^ max_answer;  
    }
}
    return 0;    
}