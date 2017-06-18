#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef long long int lli;
typedef long int li;

// Aashutosh Rathi 
// CodeChef February Long CHEFAPAR

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		li n;
		scanf("%ld",&n);
		li a[n],i,fine = 0,flag = 0,in,onec=0;
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
			if(a[i] == 0){
				fine = fine + 1100;
				if(flag==0){
					flag=1;
				}
			}

			if(flag==1 && a[i] == 1){
				fine += 100;
			}

		}
		printf("%ld\n",fine);
	}
	return 0;
}