// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Use memcpy while copying array :D
#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long int BIG;


int main()
{
	int t;
	scanf("%ld",&t);
	while(t--)
	{
		BIG n,i,count=1,b;
		scanf("%ld",&n);
		if(n==0)
		{
			printf("%d\n",0);
		}
		else if(n==1)
		{
			printf("INFINITY\n");
		}
		else if(n==2)
		{
			printf("1\n");
		}

		else
		{
			for(i=3;i<=n;i++)
			{	BIG t=n;
				while(t!=0)
				{
					t=t/i;
					if(t-i<0)
					{
						if(t==1)
					   {
						  count++;
					   }
					   break; //stops loop from running additionally
					}

				}

			}
			printf("%ld\n",count);
		}

	}

	return 0;
}



