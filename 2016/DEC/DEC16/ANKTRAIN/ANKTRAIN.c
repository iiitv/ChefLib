// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Use memcpy while copying array :D
#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(n%8==0)
		{
			printf("%dSL\n",n-1);
		}
		if(n%8==1)
		{
			printf("%dLB\n",n+3);
		}
		if(n%8==2)
		{
			printf("%dMB\n",n+3);
		}
		if(n%8==3)
		{
			printf("%dUB\n",n+3);
		}
		if(n%8==4)
		{
			printf("%dLB\n",n-3);
		}
		if(n%8==5)
		{
			printf("%dMB\n",n-3);
		}
		if(n%8==6)
		{
			printf("%dUB\n",n-3);
		}
		if(n%8==7)
		{
			printf("%dSU\n",n+1);
		}


	}
	return 0;
}
