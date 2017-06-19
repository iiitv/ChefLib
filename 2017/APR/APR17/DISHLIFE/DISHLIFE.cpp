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
typedef long long PAPA;

int main()
{
	std::ios_base::sync_with_stdio(false);
	int t, i, j;
	scanf("%d", &t);
	while(t--) {
		long int n, k;
		scanf("%ld %ld", &n, &k);
		bool check[k];
		int count = 0, result = 0;
		memset(check, false, k);
		for(i = 0; i < n; i++) {
			long int p, x;
			scanf("%ld", &p);
			for(j = 0; j < p; j++) {
				scanf("%ld", &x);
				check[x-1] = true;
			}

			if(p==k) {
				count = k;
			}
			else if(result != 2 && i>=n-2) {
				count = 0;
				for(j = 0; j < k; j++) {
					if(check[j] == true ) {
						count++;
						//printf("%d ",j);
					}	
				}
			}
			//printf("count = %d\n", count);
			if(count == k && i == n-2 )	result = 2;	 
			else if(count == k && result != 2)	result = 3;
		}
			if(count < k)			printf("sad\n");
			else if(result == 2)	printf("some\n");
			else if(result == 3)	printf("all\n");		
	}		
		return 0;	
}