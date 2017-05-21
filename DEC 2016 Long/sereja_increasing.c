#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef long long int BADA;

int incsub( int arr[], int x)
{
    int val[x],i,j,result = 0;
 
    for (i=0;i<x;i++)
        val[i]=1;
 
    for (i=1;i<x;i++)
    {
        for (j=0;j<i;j++) 
        {
            if ( arr[i]>arr[j] && val[i]-1<val[j])
                      val[i]=val[j]+1;
        }
    }
 
    
    for (i=0;i<x;i++)
    {
        if (result < val[i])
            result = val[i];
    }
 
    return result;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d %d",&n,&m);

		int arr[n],i,j,max=0;

		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);

		while(m--)
		{
			int l,r;
			scanf("%d %d",&l,&r);
			int newa[r-l+1];

			for(i=l-1;i<=r-1;i++)
			{
				newa[i+1-l]=arr[i];
			}
			
			printf("%d\n",incsub(newa,r-l+1));
		}

	}
	return 0;
}

