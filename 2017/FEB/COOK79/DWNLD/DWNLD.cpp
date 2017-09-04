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
		int n,k;
		scanf("%d%d",&n,&k);
		int min[n];
		int cost[n];
 
		for(int i=0;i<n;++i)
		{
			scanf("%d%d",&min[i],&cost[i]);
		}
		int i=0;
		while(k>=0&&i<n)
		{
			k=k-min[i];
			if(k<0)
				min[i]=(-1)*k;
			else
				min[i]=0;
			i++;
		}
		int total=0;
		for(int j=0;j<n;++j)
		{
			total+=(min[j]*cost[j]);
		}
		printf("%d\n",total );
	}	
}
