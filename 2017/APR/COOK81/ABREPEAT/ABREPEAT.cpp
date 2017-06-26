// Code written by Monal
#include "bits/stdc++.h"
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	int tc;
	cin>>tc;
	while (tc--) {
		long long int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		long long int aarr[n];
		long long int barr[n];
		memset(aarr,0,n);
		memset(barr,0,n);
		long long int answer = 0;
		long long int count=0;
		for (long long int i=0;i<n;++i) {
			if (s[i]=='b')
				count++;
			else if (s[i]=='a')
				barr[i]=count;
		}
		count=0;
		for (long long int i=n-1;i>=0;--i) {
			if (s[i]=='b')
				count++;
			else if (s[i]=='a')
				aarr[i]=count;
		}
		for (long int i=0;i<n;++i) {
			if (s[i]=='a') {
				//cout<<"i:"<<i<<endl;
				answer += ((aarr[i]*k*(k+1))/2);
				//cout<<"after b:"<<((aarr[i]*k*(k+1))/2)<<endl;
				answer += ((barr[i]*k*(k-1))/2);
				//cout<<"before b:"<<((barr[i]*k*(k-1))/2)<<endl;
			}
		}
		cout<<answer<<"\n";
	}
	return 0;
}
