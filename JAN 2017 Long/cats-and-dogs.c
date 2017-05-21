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
	lli c,d,l;
	scanf("%lld %lld %lld",&c,&d,&l);
	if(l%4!=0)
	{
		printf("no\n");
	}
	else
	{
		if(l<(d)*4)
			printf("no\n");
		else if(l>(c+d)*4)
			printf("no\n");
		else if(d==0 && l<c*4)
			printf("no\n");
		else if(c>2*d && l<(d*4+(c-2*d)*4))
			printf("no\n");
		else 
			printf("yes\n");
	}
}
	return 0;
}