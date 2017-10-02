//Code by ista2000 / Istasis Mishra
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
struct tr
{
    int d, t, s;
};
bool cmp(tr tr1, tr tr2)
{
    return tr1.d < tr2.d;
}
 
const int mod = 1e9 + 7;
#undef int
int main()
{
#define int long long int
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<tr> v(n);
        for(int i = 0;i<n;i++)
            cin >> v[i].d >> v[i].t >> v[i].s;
        sort(v.begin(), v.end(), cmp);
        priority_queue< pair<int,int> > pq;
        int cnt = 0;
        for(int i = 0;i <= m;i++)
        {
            for(;cnt<n;)
            {
                if(v[cnt].d > i)
                    break;
                pq.push(make_pair(v[cnt].s, cnt));
                cnt++;
            }
            if(pq.empty()) continue;
            auto pp = pq.top();
            v[pp.second].t--;
            if(v[pp.second].t == 0)
                pq.pop();
        }
        int anss = 0;
        for(int i = 0;i<n;i++)
            anss += v[i].t * v[i].s;
        cout << anss << endl;
    }
 
    return 0;
} 
