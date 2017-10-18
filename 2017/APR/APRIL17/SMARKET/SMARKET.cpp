// Code written by Monal
#include"bits/stdc++.h"
#include<stdio.h>

using namespace std;

int main() {
	int tc;
	scanf("%d",&tc);
	while (tc--) {
		int n,q;
		scanf("%ld %ld",&n,&q);
		vector<long int> arr(n);
		for (int i=0;i<n;i++) {
			scanf("%ld",&arr[i]);
		}
		long int prev = arr[n-1];
		long int count=0;
		vector<long int>occ(n,0);
		for(int i=n-1;i>=0;i--) {
			count=1;
			while (arr[i]==prev && i>=0) {
				occ[i]=count;
				count++;
				i--;
			}
			prev=arr[i];
			i++;
		}

		while (q--) {
			int l,r,k;
			long int answer=0;
			scanf("%d %d %d",&l,&r,&k);
			prev = arr[l-1];
			for (int i=l-1;i<r;i++) {
				long int tmp=occ[i];
				//cout<<"arr: "<<arr[i]<<endl;
				//cout<<"occ: "<<occ[i]<<endl;
				if (i+tmp>r) {
					tmp = tmp - occ[r];
				}
				if (tmp>=k) {
					answer++;
					i += (tmp-1);
				}
			}
			printf("%ld\n",answer);
		}
	}
	return 0;
}
