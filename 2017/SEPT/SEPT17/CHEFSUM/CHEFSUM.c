//Made by Savitoj

#include <stdio.h>
int main() {
    int tc;
    scanf("%d",&tc);
    while(tc--){
    
        int n;
        scanf("%d",&n);

        int a[n];
        int min=100001,j=-1;
        int c;
        for (c = 0 ; c < n ; c++ ){
            scanf("%d",&a[c]);
            if(a[c]<min){
                min=a[c];
                j=c+1;
            }
        }
        printf("%d\n",j);
  }
}
