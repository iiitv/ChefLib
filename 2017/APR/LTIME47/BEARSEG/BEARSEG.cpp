// Code written by Monal
#include "bits/stdc++.h"
 
using namespace std;
 
#define ll long long int
#define l long int
 
 
void sum_of_subsequence(l n,ll P) {
    ll curr_sum;
    vector<ll> arr(n,0);
    for (l i = 0; i < n; ++i) {
    	cin>>arr[i];
    }
    ll max=0,occ=0;
    for (l i = 0; i < n; ++i) {
        curr_sum = 0;
        for (l j = i; j < n; ++j) {
           curr_sum = curr_sum + arr[j];
           if (curr_sum % P > max) {
            	max = curr_sum % P;
            	occ=1;
           }
           else if (curr_sum % P == max) {
           	occ++;
           }
        }
    }
    arr.clear();
    cout<<max<<" "<<occ<<"\n";
}
 
int main() {
	ios::sync_with_stdio(false);
	int tc;
	cin>>tc;
	while (tc--) {
		l n;
		ll p;
		cin>>n>>p;
		sum_of_subsequence(n,p);
	}
	return 0;
}
