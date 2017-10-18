// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef long long int lli;
typedef long int li;
#define mod(x) x%1000000007;
#define MIN( n1, n2 )	((n1) > (n2) ? (n2) : (n1))
#define MAX( n1, n2 )	((n1) > (n2) ? (n1) : (n2))


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
		li t1,t2;
		int adj[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				adj[i][j] = 0;
		}

		for(i=0;i<n-1;i++)
		{
			scanf("%ld %ld",&t1,&t2);
			adj[t1-1][t2-1] = 1;
			adj[t2-1][t1-1] = 1;
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

	Adj Matrix End ----- */

		for(i=0;i<n;i++)
		{
			lli max = 0;
			int maxv = 0;
			for(j=0;j<n;j++)
			{
				if(adj[i][j] == 0 && i!=j && max < a[j])
				{
						max = a[j] ;
						//printf("%ld ",max);
						maxv = j+1;
				}
			}
			printf("%d ",maxv);
		}

	}
	return 0;
}
