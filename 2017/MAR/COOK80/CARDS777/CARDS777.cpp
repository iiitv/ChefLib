// Code written by Monal
#include"bits/stdc++.h"
#include<stdio.h>

using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--){
        long int r,b,p;
        scanf("%ld%ld%ld",&r,&b,&p);
        float r1 = (float) r;
        float b1 = (float) b;
        float rt = (float) p;
        float bt = r1 + b1 - rt;

        float ans = (r1*rt) + (b1*bt);
        ans = ans / (r1+b1);
        printf("%.10lf\n",ans);
    }
    return 0;
}
