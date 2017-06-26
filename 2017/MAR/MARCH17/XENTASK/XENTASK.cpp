// Code written by Monal
#include"bits/stdc++.h"
#include<stdio.h>
using namespace std;
 
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
			int n;
			scanf("%d",&n);
			long int a[n],b[n],tmp;
			long long int o1,o2,e1,e2;
			o1=o2=e1=e2=0;
			for(int i=0;i<n;++i)
			{
				scanf("%ld",&tmp);
				if(i%2==0)
					o1+=tmp;
				else
					e1+=tmp;
			}
			for(int i=0;i<n;++i)
			{
				scanf("%ld",&tmp);
				if(i%2==0)
					o2+=tmp;
				else
					e2+=tmp;
			}
			long long int ans1=o1+e2;
			long long int ans2=o2+e1;
			printf("%lld\n", min(ans1,ans2));
	}
	return 0;
}
