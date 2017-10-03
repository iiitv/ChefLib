// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Use memcpy while copying array :D
#include <bits/stdc++.h>
#include <stdio.h>
// Yaar use long long instead of long
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
typedef long long PAPA;

int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		BIG n ,i;
		cin >> n;
		std::vector<PAPA> v;
		PAPA a[n], sum = 0, positive = 0, positivec = 0, negative = 0, maxres = 0, negsum = 0, max1 = 0;
		for (i = 0; i < n; ++i) {
			cin >> a[i];
			if(a[i]>=0) {
				positivec++;
				positive += a[i];
			}
			else {
				v.push_back(-a[i]);
				negsum += -a[i];
			}
		}

		//cout << "negsum: " << negsum << endl;

		sort(v.begin(), v.end());
		std::vector<PAPA> maxy;

		//for(BIG x:v)
		//	cout << x << " ";
		//cout << "negative : " << negative <<endl;

		if(negsum != 0) {
			for(i=0; i<v.size();i++) {
				negative += v[i];
				maxy.push_back((positive-negative)*(positivec+i+1) - (negsum - negative));
			}
		}

		else
			maxy.push_back(0);


		//cout << "maxy :";
		//for(BIG x:maxy)
		//	cout << x << " ";
		//cout << endl;

		sort(maxy.begin(), maxy.end());

		maxres = MAX(positive*positivec - negsum, maxy[maxy.size()-1]);
		cout << maxres << endl;

	}
	return 0;
}
