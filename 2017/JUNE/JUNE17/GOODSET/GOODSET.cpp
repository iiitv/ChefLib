// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Use memcpy while copying array :D

// Answer Stauts : AC (100 pts)

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

#define mod(x)			x%1000000007;
#define MIN(n1, n2 )	((n1) > (n2) ? (n2) : (n1))
#define MAX(n1, n2 )	((n1) > (n2) ? (n1) : (n2))
#define MID(s, e)		(s+(e-s)/2)
#define FOR(i, a, b)	int i; for(i=(a);i<(b);i++)
#define FORD(i, a, b)	int i; for(i=(a);i>(b);i--)
#define show(a)			for(i=0;i<sizeof(a);i++) cout<<a[i]<<" ";
#define get(a)			for(i=0;i<sizeof(a);i++) cin>>a[i];
#define scanint(a)		scanf("%d",&a)
#define scanLLD(a)		scanf("%lld",&a)
#define scanstr(s)		scanf("%s",s)
#define scanline(l) 	scanf(" %[^\n]",l);

typedef long BIG;
typedef unsigned long long PAPA;

int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, i;
		cin >> n;
		for(i=n;i<2*n;i++) {
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
