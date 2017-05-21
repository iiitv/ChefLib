
#include <stdio.h>
#include <math.h>
int main()
{
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
		long int n,i,j,count=1,b;
		scanf("%ld",&n);
		if(n==0)
		{
			printf("%d\n",count-1);
		}
		else if(n==1)
		{
			printf("INFINITY\n");
		}
		else
		{
			for(i=2;i<n;i++)
			{	
				for(j=1;j<20;j++)
				{
					if(n>=pow(i,j) && n<2*pow(i,j) )
				{
					count++;
				}

				}
				
			}
			printf("%ld\n",count);
		}
		
		
	}
	return 0;
}