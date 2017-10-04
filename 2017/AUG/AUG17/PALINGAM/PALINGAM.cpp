#include <bits/stdc++.h>
using namespace std;
int cnta[26],cntb[26];
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[501],t[501];
        cin>>s>>t;
        int len=strlen(s);
        memset(cnta,0,sizeof(cnta));
        memset(cntb,0,sizeof(cntb));
        for (int i=0;i<len;i++)
        {
            int a=s[i]-'a';
            int b=t[i]-'a';
            cnta[a]++;
            cntb[b]++;
        }
        int uniqueA=0,uniqueB=0;
        for (int i=0;i<26;i++)
        {
            if (cnta[i]==0 && cntb[i])
            {
                uniqueB=max(uniqueB,cntb[i]);
            }
            if (cnta[i] && cntb[i]==0)
            {
                uniqueA=max(uniqueA,cnta[i]);
            }
        }
        if (uniqueA==0)
        {
            cout<<"B";
        }
        else if (uniqueA>=2){
            cout<<"A";
        }
        else{
            if (uniqueB==0){
                cout<<"A";
            }
            else 
            {
                cout<<"B";
                
            }
        }
        cout<<"\n";
    }
    return 0;
}