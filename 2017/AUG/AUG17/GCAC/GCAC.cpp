//Made by vanguard7
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- ) {
		int n, m, i, j;
		set <int> s;
		cin >> n >> m;
		char x[m+1];
		long long int minSalary[n], offeredSalary[m], maxJobOffered[m], cost = 0, jobs = 0, companies = m;
		for(i = 0; i < n; ++i)
			cin >> minSalary[i];
		for(i = 0; i < m; ++i)
			cin >> offeredSalary[i] >> maxJobOffered[i];
		for(i = 0; i < n; ++i) {
			int max = -1;
			vector <int> v;
			cin >> x;
			for(j = 0; j < m; ++j)
				if(x[j] == '1')
					v.push_back(j);
			j = v.size();
			if(v.size() != 0) {
			int maxsalary = -1;
				while(j--) {
					if(minSalary[i] <= offeredSalary[v[j]] && maxJobOffered[v[j]] > 0 && offeredSalary[v[j]] > maxsalary) {
						max = v[j];
						maxsalary = offeredSalary[v[j]];
					}	
				}
			}	
			if(max! =- 1) {
				cost += offeredSalary[max];
				maxJobOffered[max]--;
				jobs++;
				s.insert(max);
			}
		}	
	cout << jobs << " " << cost << " " << companies-s.size() << endl;
	}
	return 0;
}
