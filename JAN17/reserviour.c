#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

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
		int n,m,i,j;
		scanf("%d %d",&n,&m);
		char s[n][m];
		for(i=0;i<n;i++)
		{
			scanf("%s",s[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(s[i][j] == 'W' && i >0 && j>0)
				{
					
				}
			}
		}

		
	}
	return 0;
}