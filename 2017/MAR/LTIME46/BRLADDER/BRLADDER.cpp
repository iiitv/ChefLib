// Code written by Monal
#include"bits/stdc++.h"
#include<stdio.h>
 
using namespace std;
 
int main() {
	int tc;
	scanf("%d",&tc);
	while(tc--) {
		long long int a,b;
		scanf("%lld%lld",&a,&b);
		if(abs(a-b)==2)
			printf("YES\n");
		else if(a%2==1)
		{
			a--;
			a=a/2;
			if(b==2*a+2)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else if(b%2==1)
		{
			b--;
			b=b/2;
			if(a==2*b+2)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}
