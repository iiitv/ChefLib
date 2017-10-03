// Code by Piyush

#include <bits/stdc++.h>
using namespace std;
int main() {

	std::ios::sync_with_stdio(false);
	int testCases;
	cin >> testCases;
	double sr2 = sqrt(2);
	while(testCases--) {
		double n, v1, v2;
		cin >> n >> v1 >> v2;
		if((sr2 * n / v1) <= (2 * n / v2))
		  cout << "Stairs\n";
		else
		  cout << "Elevator\n";
	}
	return 0;
}
