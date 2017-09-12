#include <stdio.h>
#include <stdlib.h>

int main()
{   long long unsigned int Life,test,B,Ans,x,y;
    scanf("%llu",&test);
    while(test--){
        Ans = 0;
        scanf("%llu%llu",&Life,&B);
        if(Life<=B){
            printf("%llu\n",Ans);
            continue;
        }
        Life = Life-B;
        x = Life/(2*B);
        y = Life%(2*B);
        Ans = x*(x+1)*B;
        x++;
        Ans = Ans+ x*y;
        printf("%llu\n",Ans);
    }
    return 0;
}