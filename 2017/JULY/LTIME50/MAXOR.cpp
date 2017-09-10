/*
	Made by:
		``` Monal Shadi ``
	Github: Monal5031
	Codechef: monalshadi
*/

#include "bits/stdc++.h"

using namespace std; 
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		if (n == 1) {
			cout<<"0\n";
			continue;
		}
		vector < int > arr(n);
		int ans = 0;
		int tmp = 0;
		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
			tmp = arr[i];
			for (int j = 0; j < i; ++j) {
				if (tmp == 0 || arr[j] == 0) {
					ans++;
				} else if (tmp == 1) {
					if (arr[j] & 1) {
						ans++;
					}
				} else if (arr[j] == 1) {
					if (tmp & 1) {
						ans++;
					}
				} else if ((tmp | arr[j]) <= max(tmp, arr[j])) {
					ans++;
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
