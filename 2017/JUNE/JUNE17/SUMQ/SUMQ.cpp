//Made by vanguard7
#include <bits/stdc++.h>
using namespace std;

long long int mod(long long int a, long long int m) {
	return (a % m + m) % m;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int p, q, r, i, j, k;
		cin >> p >> q >> r;
		long long int X[p], Y[q], val, sum = 0;
		vector < long long int > Z;
		vector < long long int > temp;
		for (i = 0; i < p; i++) {
			cin >> X[i];
		}
		for (i = 0; i < q; i++) {
			cin >> Y[i];
		}
		sort(Y, Y + q);
		for (i = 0; i < r; i++) {
			cin >> val;
			if (val <= Y[q - 1])
				Z.push_back(val);
		}
		for (i = 0; i < p; i++) {
			if (X[i] <= Y[q - 1])
				temp.push_back(X[i]);
		}
		sort(temp.begin(), temp.end());
		sort(Z.begin(), Z.end());
		for (j = 0; j < q; j++) {
			for (i = 0; i < temp.size(); i++) {
				for (k = 0; k < Z.size(); k++) {
					if (temp[i] <= Y[j] && Y[j] >= Z[k])
						sum = sum + ((temp[i] + Y[j]) * (Y[j] + Z[k])) % 1000000007;
				}
			}
		}
		cout << mod(sum, 1000000007) << endl;
	}
	return 0;
}
