// Code written by Monal
#include "bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//int start = clock();
	int tc;
	cin>>tc;
	while (tc--) {
		int n,k;
		cin>>n>>k;
		vector < vector < bool > > arr;
		vector < int > counter;
		int copyn = n;
		while (copyn--) {
			vector < bool > tmp(k+1, false);
			int tn;
			cin>>tn;
			int tmp1;
			counter.push_back(tn);
			while (tn--) {
				cin>>tmp1;
				tmp[tmp1] = true;
			}
			arr.push_back(tmp);
		}
		//cout<<"done"<<endl;
		long int answer = 0;
		bool passer = true;
		for (int i = 0; i < n-1; ++i) {
			//cout<<"done"<<endl;
			for (int j = i + 1; j < n; ++j) {
				//cout<<"done"<<endl;
				passer = true;
				if (counter[i] + counter[j] >= k) {
					for (int copyn = 1; copyn <= k; ++copyn) {
						if (!arr[i][copyn] && !arr[j][copyn]) {
							//cout<<copyn<<endl;
							passer = false;
							break;
						}
					}
					if (passer)
						answer++;
				}
			}
		}
		arr.clear();
		counter.clear();
		cout<<answer<<"\n";
	}
	//int end = clock();
	//cout << "time: " << (end - start)/(double)(CLOCKS_PER_SEC)*1000 << " milliseconds\n";
	return 0;
}
