#include <stdio.h>

int gcd(int a, int b)
{
  int c = a % b;
  while(c != 0)
  {
    a = b;
    b = c;
    c = a % b;
  }
  return b;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,j,k,count=0,max=0;
		scanf("%d",&n);
		long int a[n],i;
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		
		for(j=0;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(gcd(a[j],a[k])>=2)
				{
					count++;
				}
				if(max<count)
				{
					max=count;
				}
			}
		}
			printf("%d\n",max);

	}
	return 0;
}