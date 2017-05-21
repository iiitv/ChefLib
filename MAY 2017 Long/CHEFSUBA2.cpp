// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Result = Correct Answer (100 marks)

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

#define mod(x)          x%1000000007;
#define MIN(n1, n2 )    ((n1) > (n2) ? (n2) : (n1))
#define MAX(n1, n2 )    ((n1) > (n2) ? (n1) : (n2))
#define MID(s, e)       (s+(e-s)/2)
#define FOR(i, a, b)    int i; for(i=(a);i<(b);i++)
#define FORD(i, a, b)   int i; for(i=(a);i>(b);i--)
#define show(a)         for(i=0;i<sizeof(a);i++) cout<<a[i]<<" ";
#define get(a)          for(i=0;i<sizeof(a);i++) cin>>a[i];
#define scanint(a)      scanf("%d",&a)
#define scanLLD(a)      scanf("%lld",&a)
#define scanstr(s)      scanf("%s",s)
#define scanline(l)     scanf(" %[^\n]",l);

typedef long int BIG;
typedef long long PAPA;

int main() {
    int n, k, p, m, l;
    string query;
    map<int, int> sum_map;
    map<int, int>::iterator it;
    vector<int> v;
    deque<int> sumdq;

    cin >> n >> k >> p;
    m = k - 1;
    l = n - 1;
    
    for(int i = 0; i < n; i++) {
        int x;  
        cin >> x;
        v.push_back(x);
    }
    
    cin >> query;

    int res = 0;

    for(int j = 0; j < min(k,n); j++) 
        res = res + v[j];

    if(k >= n) {
        for(int i = 0; i < p; i++) {
            if(query[i] == '?')  
                cout << res << endl;
        }
        return 0;
    }

    for(int i = 0; i < n - k + 1 ; i++) {
        sumdq.push_back(res);
        
        if(sum_map.count(-res) > 0) 
            sum_map[-res]++;
        else 
            sum_map[-res] = 1;

        if(i + k < n)   
            res += (v[i + k] - v[i]);
    }
 
    for(int i = 0; i < p; i++) {
        if(query[i] == '!') {
            int left = v[m];
            m--;

            if(m == -1)   
                m = n - 1;

            int right = v[l];
            l--;

            if(l == -1)  
                l = n - 1;
            
            int res = sumdq.back();
            sumdq.pop_back();
            sum_map[-res]--;

            if(sum_map[-res] == 0)  
                sum_map.erase(-res);
 
            res = sumdq.front() + right - left;
            if(sum_map.count(-res)>0) 
                sum_map[-res]++;
            else 
                sum_map[-res] = 1;
 
            sumdq.push_front(res);
        }

        else {
                it=sum_map.begin();
                int wtf = it -> first;
                cout << -wtf << endl;
        }
    }
}