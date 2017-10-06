// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <bits/stdc++.h>
#include <stdio.h>
#include <string>

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
typedef long long PAPA;

int main()
{
	std::ios_base::sync_with_stdio(false);
	PAPA t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		PAPA one = 0, zero = 1, result = 0, i;
		PAPA size = str.size();
		for (i = 0; i < size; i++) {
			if(str[i] == '1') {
				if(i == size - 1) {
					zero = 0;  // reset the zero counter
				}
				i++;
				one ++;	// one counter increment

				while(str[i] == '1') {
					if(i == size - 1){
						zero = 0;  // reset the zero counter
					}
					i++;
					one ++;	// one counter increment
				}

				while(str[i] == '0') {
					zero++;
					i++;
				}
				  --i;
			}
				result = result + one*zero;
				zero = 1;  // reset zero count to 1
		}
			cout<<result<<endl;
	}
}
