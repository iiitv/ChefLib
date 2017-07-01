// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <bits/stdc++.h>
#include <algorithm>
#include <stdio.h>
/*
	Aashutosh Rathi 
	Code Chef March Long Problem 2
	Bear and Extra Number 
*/
using namespace std;
typedef long int BIG;
typedef long long int PAPA;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		BIG n,i,c=0;
		scanf("%ld",&n);
		PAPA a[n];
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		for(i=0;i<n-1;i++){
			if(a[i+1] != (a[i]+1) && i<n-2){
				printf("%lld\n",a[i]);
				break;
			}
			else if(i>=n-2){
				printf("%lld\n",a[n-1]);
				break;
			}
		}

	}
	return 0;	
}