#include <bits/stdc++.h>
using namespace std;
const int maxn = 50;
const int maxs = 2600;
const int mod = 1e9 + 7;
 
int a[3000];
int fn[305][305][2605];
int dp(int x, int p, int q) {
	int val = a[x] + p - q;
	if(val < 0) return 0;
	// if(val >= 105) return 0;
	if(x == maxs) {
		return (p == 0 && q == 0);
	}
	if(fn[p][q][x] != -1) return fn[p][q][x]; 
	int ans = 0;
	for(int i = 0; i <= val; i++) {
		ans += dp(x + 1, q, abs(val - i));
		ans %= mod;
	}
	return fn[p][q][x] = ans;	
}
 
int main (int argc, char const* argv[])
{
	int test;
	scanf("%d", &test);
	while(test--) {
		int n;
		scanf("%d", &n);
		memset(a, 0, sizeof a);
		for(int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
		}
		memset(fn, -1, sizeof fn);
		printf("%d\n", dp(1, 0, 0));	
	}
	return 0;
} 