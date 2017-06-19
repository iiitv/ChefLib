#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// CodeChef March Long 2017
// Bandwidht Matrix
// aashutosh001

typedef long long int lli;
typedef long int li;
#define mod(x) x%1000000007;
#define MIN( n1, n2 )   ((n1) > (n2) ? (n2) : (n1))
#define MAX( n1, n2 )   ((n1) > (n2) ? (n1) : (n2))


int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,count=0,i,x;
		scanf("%d",&n);
		for(i=0;i<n*n;i++){
			scanf("%d",&x);
			if(!x){
				count++;
			}
		}
		if(!count){  // all 1's
			printf("%d\n",n-1);
		}
		else if(count >= n){ // zeroes less than equal to n
			printf("%d\n",0);
		}
		else{
			printf("%d\n",n-count/2 - ((n+1)%2));
		}


	}
	return 0;
}