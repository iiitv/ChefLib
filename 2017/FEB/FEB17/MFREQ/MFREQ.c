// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~© Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutosh001~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <math.h>
#include <stdio.h>
#include <string.h>
// MFREQ CodeChef Feb 2017 Long
typedef long long int lli;
typedef long int li;

int main()
{
	li n,m;
	scanf("%ld %ld",&n,&m);
	lli a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	while(m--)
	{
		li l,r,k;
		scanf("%ld %ld %ld",&l,&r,&k);
		li mid = l + (r-l)/2 , count = 1;
		//printf("%ld",mid);
		li i = mid - 1 , j= mid + 1;
		while(a[i] == a[mid] || a[j] == a[mid]){
			if(a[i] == a[mid]){
				count++;
				//printf("@'%ld ",i+1);
				if(count==k) break;
				if(i==(l-1)) break;
				i--;
			}
			if(a[j] == a[mid]){
				count++;
				//printf("@''%ld ",j+1);
				if(count==k) break;
				if(j==(r)) break;
				j++;
			}
			//printf("count = %ld\n",count);
		}
		//printf("count = %ld\n",count);
		if(count>=k){
		printf("%ld\n",a[mid]);
		}
		else if(count<k){
			printf("-1\n");
		}
	}
	return 0;
}
