/*
	Made by:
		``` Monal Shadi ``
	Github: Monal5031
	Codechef: monalshadi
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false)
	cin.tie(NULL);
	cout.tie(NULL)

	int tc;
	cin >> tc;
	while (tc--) {
		long long n, b;
		cin >> n >> b;
		if (n <= b) {
			cout << "0\n";
			continue;
		}
		else if (b > n / 2) {
			cout << n % b << "\n";
			continue;
		}
		unsigned long long a = n / b;
		unsigned long long t = a;
		a = ceil(a / 2.0);
		cout << (n - a*b) * (a) << "\n";
	}
	return 0;
}
