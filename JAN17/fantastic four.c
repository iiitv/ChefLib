#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef long long int lli;
typedef long int li;

void foursq(int n)
{
    int i,j,k,l,count=0;
    for(i=0;i<=floor(sqrt(n));i++)
    {
        for(j=0;j<=floor(sqrt(n-i*i));j++)
        {
            for(k=0;k<=floor(sqrt(n-i*i-j*j));k++)
            {
                for(l=0;l<=floor(sqrt(n-i*i-j*j-k*k));l++)
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
}
    

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int no,q;
        long int p;
        scanf("%d %d %ld",&no,&q,&p);
        int a[no],i;
        for(i=0;i<no;i++)
        {
            scanf("%d",&a[i]);
        }
        int aa,b,c,z=1,fi,j,t1,t2;
        for(i=0;i<q;i++)
        {
            scanf("%d",&aa);
            switch(aa)
            {
                case 1:
                {
                  scanf("%d %d",&b,&c);
                    a[b-1] = c; 
                    break;
                }
      
                case 2: 
                {
                    scanf("%d %d",&t1,&t2);
                    z = 1 ;
                    for(j=t1-1;j<t2;j++)
                    {
                       z = z * a[j]; 
                      // printf("%d * %d ",z,a[j]);
                    }
                    //printf("\nz = %d ==> ",z);
                    fi = z;
                    foursq(fi);
                    break;
                }
            }
         }

    }

    return 0;

}