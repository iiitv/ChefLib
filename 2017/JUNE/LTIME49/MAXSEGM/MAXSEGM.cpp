// code written by Monal
#include "bits/stdc++.h"

using namespace std;

void solve(long int n) {
	unordered_set <long int> s;
	long long int w[n];
	long int c[n];
	for (long int i =0 ; i < n; ++i) {
		cin>>c[i];
	}
	for (long int i =0 ; i < n; ++i) {
		cin>>w[i];
	}
	long int j = 0;
	unsigned long long int tmp = 0, ans = 0;
	for (int i = 0; i < n; ++i) {
		while (j < n && s.find(c[j]) == s.end()) {
			s.insert(c[j]);
			tmp += w[j];
			j++;
		}
		if (tmp > ans) {
			ans = tmp;
		}
		tmp -= w[i];
		s.erase(c[i]);
	}
	cout<<ans<<"\n";
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int tc;
	cin>>tc;
	while (tc--) {
		long int n;
		cin>>n;
		solve(n);
	}
	return 0;
}
