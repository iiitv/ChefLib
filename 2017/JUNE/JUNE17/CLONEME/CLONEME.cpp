// Code wriiten by Monal
#include "bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	cin>>tc;
	while (tc--) {
		long int n,q;
		cin>>n>>q;
		vector < long int > arr(n);
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		while (q--) {
			long long int sum1 = 0, sum2 = 0;
			long int a, b, c, d;
			cin>>a>>b>>c>>d;
			bool passer = true;
			bool chance = true;
			long int copyn = b - a + 1;
			vector < long int > arr1(copyn);
			vector <long int > arr2(copyn);

			long int j = a - 1;

			for (long int i = 0; i < copyn; ++i, ++j)
				arr1[i] = arr[j];
			sort(arr1.begin(), arr1.end());

			j = c - 1;

			for (long int i = 0; i < copyn; ++i, ++j)
				arr2[i] = arr[j];
			sort(arr2.begin(), arr2.end());

			for (long int i = 0; i < copyn; ++i) {
				if (arr1[i] != arr2[i]) {
					if (chance)
						chance = false;
					else {
						passer = false;
						break;
					}
				}
			}
			if (passer)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
	return 0;
}
