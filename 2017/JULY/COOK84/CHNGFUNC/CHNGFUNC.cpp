#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
#undef int
int main()
{
#define int long long int
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    vector<int> sq;
    for(int i = 1;i < 1000100;i++)
        sq.push_back(i * i);
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for(int i = 1;i <= a;i++)
    {
        int i1 = lower_bound(sq.begin(), sq.end(), i * i)-sq.begin();
        int i2 = lower_bound(sq.begin(), sq.end(), i * i + b)-sq.begin();
        if(sq[i2]!=i * i + b)i2--;
        ans += i2 - i1;
    }
    cout << ans << endl;
 
    return 0;
} 
