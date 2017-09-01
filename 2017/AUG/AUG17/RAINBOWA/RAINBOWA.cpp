//Made by vanguard7
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, i;
		cin>>n;
		int A[n], max=0, flag=0, B[10]={0};
		for(i = 0; i<n; i++) {
			cin>>A[i];
			if (max<A[i])
				max = A[i];
			if(B[A[i]-1]==0)
				B[A[i]-1]++;
		}
		if(n<13)
			flag = 1;
		else if(max>7)
			flag = 1;
		else {
			for(i=0;i<7;i++){
				if(!B[i]) {
					flag=1;
				}
			}
			for(i=0; i<n/2; i++)
				if(A[i]!=A[n-i-1]) {
						flag=1;
						break;
					}	
		}
		if(!flag)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}
