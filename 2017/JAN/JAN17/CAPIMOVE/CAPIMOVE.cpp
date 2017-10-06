// Code written by Monal
#include<stdio.h>
#include <bits/stdc++.h>
#define ll long long int
#define li long int
using namespace std;

map<int,vector<int> > mapping;
vector<pair<ll,int> > pairs; //1st element will be population and 2nd is planet number

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	int n;
		scanf("%d",&n);
	ll tmp;
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&tmp);
			pairs.push_back(make_pair(tmp,i)); //pairing population with planet number
		}
	 int tmp1,tmp2;
		for(int i=1;i<n;i++)			//mapping the connected planets
		{
			scanf("%d%d",&tmp1,&tmp2);
			mapping[tmp1].push_back(tmp2);
			mapping[tmp2].push_back(tmp1);
		}
		sort(pairs.begin(),pairs.end());// making it easier to find the capital as we get to start from that index only
	int checkn=0;
		for(int i=0;i<n;i++)
		{
			int checker=0;
			checkn=n;
			while(checkn>=1)
			{
				if(pairs[checkn-1].second==i+1)
				{
					checkn--;
					continue;
				}
				else if(find(mapping[i+1].begin(),mapping[i+1].end(),pairs[checkn-1].second)==mapping[i+1].end()) // checking if infected planet are not mapped and if its population is greater
				{
					printf("%d ",pairs[checkn-1].second);//2nd element of pair is number
					checker=1;
					break;
				}
				checkn--;
			}
			if(checker==0)
				printf("0 ");
		}
	printf("\n");
	 mapping.clear(); //clearing a memory a little
		pairs.clear();
	}
	return 0;
}
