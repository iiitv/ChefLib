#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long int li;
#define mod(x) x%1000000007;
#define MIN( n1, n2 )   ((n1) > (n2) ? (n2) : (n1))
#define MAX( n1, n2 )   ((n1) > (n2) ? (n1) : (n2))


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		li n,i,j;
		scanf("%ld",&n);
		lli a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		li q[n-1][2];
		long int adj[n][n];
		
		for(i=0;i<n-1;i++)
		{
			scanf("%ld %ld",&q[i][0],&q[i][1]);
			adj[q[i][0]-1][q[i][1]-1] = 1;
			adj[q[i][1]-1][q[i][0]-1] = 1;
		}

	/* Adj Matrix Start -----
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%ld ",adj[i][j]);
			}
			printf("\n");
		}

	Adj Matrix End ---- */

		for(i=0;i<n;i++)
		{
			lli max = 0,maxv = 0;
			for(j=0;j<n;j++)
			{
				if(adj[i][j]==0 && i!=j)
				{
					if(max<a[j])
					{
						max = a[j] ;
						//printf("%ld ",max);
						maxv = j+1;
					}
				}
			}
			printf("%lld ",maxv);
		}

	}
	return 0;
}