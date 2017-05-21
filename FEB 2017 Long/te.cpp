#include<iostream>
using namespace std;
int main()
{
    char string[100];
    cout<<"Enter a word;";
    cin.getline(string,100);
    int len,j,k;
    for(len=0;string[len]!='\0';++len);
    for(k=0,j=len-1;k<len;++k,j--)
        string[k]=string[j];
    for(j=0;j<=len;++j)
        cout<<string[j];
}