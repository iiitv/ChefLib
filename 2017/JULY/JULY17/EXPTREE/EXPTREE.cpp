// BY: _nishant0208_
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define MAX1  1000000007
#define MAX2  1000000009
#define MAX 100001
//code for EXPTREE
ll MOD;
ll exponent(ll, ll);
ll modinverse(ll);
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n--;
        ll x, y, temp1, temp2;
        MOD = MAX1;
        x = ((n % MOD) * ((n+1) % MOD)) % MOD;
        y = (2*((2*n-1) % MOD)) % MOD;
        if(x % 2 == 0 && y % 2 == 0)
        {
            x /= 2;
            y /= 2;
        }
        if(x % 3 == 0 && y % 3 == 0)
        {
            x /= 3;
            y /= 3;
        }
        temp1=((x % MOD)*(modinverse(y))) % MOD;
        MOD = MAX2;
        x = ((n % MOD) * ((n+1) % MOD)) % MOD;
        y = (2*((2*n-1) % MOD)) % MOD;
        if(x % 2 == 0 && y % 2 == 0)
        {
            x /= 2;
            y /= 2;
        }
        if(x % 3 == 0 && y % 3 == 0)
        {
            x /= 3;
            y /= 3;
        }
        temp2=((x % MOD)*(modinverse(y))) % MOD;
        cout<<temp1<<" "<<temp2<<"\n";
    }
    return 0;
}

ll exponent(ll a, ll b)
{
    if(b == 0)
        return 1;
    ll temp = (exponent(a, b/2)) % MOD;
    temp = (temp*temp) % MOD;
    return (b % 2 == 0)? temp : ((a % MOD)*temp) % MOD;
}

ll modinverse(ll val)
{
    return exponent(val, MOD-2);
}