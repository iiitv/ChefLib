#include <stdio.h>
#include <string.h>
#include <math.h>

typedef long long int BADA;

BADA gcdfn(BADA x,BADA y)
{
    BADA kin;
    while(y!=0)
    {
        kin=y;
        y = x%y;
        x=kin;
    }
    return x;
}

int main()
{
    BADA n,result;
    int t,check;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%lld",&n);
       BADA arr[n],i,j,let,temax;
       result =0;
       for(i=0;i<n;i++)
       {
         scanf("%lld",&arr[i]);
         //Ignoring 1 as input
         if(arr[i]==1 && arr[i] == 0)
         {
          i--;
          n--;
         }
         // 1 input is erased....          
       }

       for(i=0;i<n;i++)
       {
           let = arr[i];
          // printf("%lld",let);
           check=0;
           temax=1;

           for(j=i+1;j<n;j++)
           {
             if(gcdfn(let,arr[j])>1)
             {
                 temax++;
                 let = arr[j];
                 check++;
             }
           }

           if(temax-result > 0 && abs(check)>0 )
           {
              result = temax;
           } 

           if(abs(result-n) == 0)
           {
              break;
           } 

       }
            if(result==0)
            printf("%lld\n",result+1);
            else
            printf("%lld\n",result);

    }
    return 0;
}
