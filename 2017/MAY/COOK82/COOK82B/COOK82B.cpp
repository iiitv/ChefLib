// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Answer Status : Wrong Answer

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

typedef long int BIG;
typedef unsigned long long PAPA;

long long fast_power(long long base, long long power) {
	long long result = 1;
	while(power > 0) {

		if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
			result = (result*base);
		}
		base = (base * base);
		power = power / 2; // Can also use power >>= 1; to make code even faster
	}
	return result;
}

bool check(PAPA pro, int n) {
	PAPA val = round(pow(pro, 1.0/n));
	if(val == pow(pro, 1.0/n)) {
		return true;
	}
	return false;
}


int main() {
	std::ios_base::sync_with_stdio(false);
	int n, i;
	cin >> n;
	long a[n];
	PAPA pro = 1, res = 1;
	for(i = 0; i < n; i++) {
		cin >> a[i];
		pro = (pro * a[i]);
	}
	PAPA val = round(pow(pro, 1.0/n));
	if(check(pro, n)) {
		cout << "justdoit";
	}
	else {
		PAPA pro2 = pro;

		long c[(long)sqrt(pro)+1];
		bool b[(long)sqrt(pro)+1];

		memset(c, 0, sqrt(pro)+1);
		memset(b, false, sqrt(pro)+1);

		i=2;
		while(pro2%i == 0) {
				b[i] = true;
				c[i]++;
				pro2 = pro2/i;
			}

		for(i=3; i<=sqrt(pro); i=i+2) {
			while(pro2%i == 0) {
				b[i] = true;
				c[i]++;
				pro2 = pro2/i;
			}
		}

		for(i=2; i<=sqrt(pro); i++) {
			if(b[i]) {
				//cout << i <<" : "<<c[i] << " ";
				long x;
				if(c[i]%(n+1) == 0) {
					x = 0;
				}
				else {
					x = ((c[i]/(n+1))+1)*(n+1)-c[i];
				}
				res = res * fast_power(i, x);
			}
		}
		cout << mod(res);
	}

	return 0;
}
