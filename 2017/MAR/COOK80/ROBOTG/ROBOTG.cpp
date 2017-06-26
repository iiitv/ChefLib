// Code written by Monal
#include"bits/stdc++.h"
#include<stdio.h>
 
using namespace std;
 
int main() {
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int n,m;
        string s;
        scanf("%d%d",&n,&m);
        cin>>s;
 
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                int ci=i,cj=j,k;
                for(k=0;k<s.length();k++) {
                        if(s[k]=='L'){
                            cj--;
                            if(cj<0)
                                break;
                        }
                        else if(s[k]=='R'){
                            cj++;
                            if(cj>=m)
                                break;
                        }
                        else if(s[k]=='D'){
                            ci++;
                            if(ci>=n)
                                break;
                        }
                        else{
                            ci--;
                            if(ci<0)
                                break;
                        }
                }
                if(k==s.length())
                {
                    printf("safe\n");
                    goto skip;
                }
            }
        }
        printf("unsafe\n");
        skip:
            int a;
    }
    return 0;
}
