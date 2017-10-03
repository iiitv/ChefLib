// Code written by Monal
#include "bits/stdc++.h"

using namespace std;


#define MAXN 1000001


long int spf[MAXN];


void sieve() {
	spf[1] = 1;
	for (long int i = 2; i < MAXN; ++i)
		spf[i] = i;
	for (long int i=4; i<MAXN; i+=2)
		spf[i] = 2;

	for (long int i = 3; i * i < MAXN; ++i) {
		if (spf[i] == i) {
			for (long int j = i * i; j < MAXN; j += i)
				if (spf[j]==j)
					spf[j] = i;
		}
	}
}

vector<long int> get_factorization(long int num) {
	vector<long int > ret;
	while (num != 1) {
		ret.push_back(spf[num]);
		num = num / spf[num];
	}
	return ret;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	sieve();
	long int n;
	cin>>n;
	long int arr[n];
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	//cout<<"done"<<endl;
	/*for (int i = 0; i < n; ++i) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;*/
	long int q;
	cin>>q;
	while (q--) {
		long int l,r,x,y;
		cin>>l>>r>>x>>y;
		//cout<<l<<" "<<r<<" "<<x<<" "<<y<<" "<<endl;
		unsigned long long answer = 0;
		unsigned long long int tmp;
		//cout<<"yaha"<<endl;
		for (long int j = r-1; j >= l-1; --j) {
			//cout<<"yaha"<<endl;
			vector < long int > tmp = get_factorization(arr[j]);

			//for (int i = 0; i < tmp.size(); ++i)
			//	cout<<tmp[i]<<" ";
			//cout<<endl;
			for (long int i = x; i <= y; ++i) {
				answer += count(tmp.begin(), tmp.end(), i);
			}
			tmp.clear();
		}
		cout<<answer<<"\n";
	}
	return 0;
}
