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
	int n,i,j,k,l,count=0;
    scanf("%d",&n);
    for(i=0;i<=ceil(sqrt(n));i++)
    {
        for(j=0;j<=n-i*i;j++)
        {
            for(k=0;k<=n-i*i-j*j;k++)
            {
                for(l=0;l<=n-i*i-j*j-k*k;l++)
                {
                    if(i*i+j*j+k*k+l*l == n)
                    {
                      printf("%d %d %d %d\n",l,k,j,i);
                      count++;
                    }
                    if(count == 1)
                        break;
                }
                if(count == 1)
                        break;    
            }
            if(count == 1)
                        break;
        }
        if(count == 1)
                        break;
    }
	
	return 0;
}