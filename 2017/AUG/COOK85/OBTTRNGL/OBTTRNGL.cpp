// Code made by Monal5031/monalshadi
#include "bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long int tc;
	cin >> tc;
	while (tc--) {
		long long k, a, b;
		cin >> k >> a >> b;

		long long maxi = max(a, b);
		long long mini = min(a, b);

		if (maxi - mini == k/2 && k % 2 == 0) {
			cout << "0\n";
		} else if (maxi - mini - 1 < k/2) {
			cout << (maxi - mini - 1) << "\n";
		} else {
			cout << (k - maxi + mini - 1) << "\n";
		}
	}
	return 0;
}