// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

#define mod(x) 			x%1000000007;
#define MIN(n1, n2 )    ((n1) > (n2) ? (n2) : (n1))
#define MAX(n1, n2 )    ((n1) > (n2) ? (n1) : (n2))
#define MID(s, e)       (s+(e-s)/2)
#define FOR(i, a, b) 	int i; for(i=(a);i<(b);i++)
#define FORD(i, a, b) 	int i; for(i=(a);i>(b);i--)
#define show(a)			for(i=0;i<sizeof(a);i++) cout<<a[i]<<" ";
#define get(a)			for(i=0;i<sizeof(a);i++) cin>>a[i];
#define scanint(a) 		scanf("%d",&a)
#define scanLLD(a) 		scanf("%lld",&a)
#define scanstr(s) 		scanf("%s",s)
#define scanline(l) 	scanf(" %[^\n]",l);

typedef long int BIG;
typedef unsigned long long PAPA;

int main() {
	std::ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) {
		PAPA n, k, m;
		cin >> n >> k >> m;
		cout << ceil(n/k) << " ";
		if((n%k)==0)
			cout << 1 << endl;
		else {
			
		}
	}
	return 0;	
}