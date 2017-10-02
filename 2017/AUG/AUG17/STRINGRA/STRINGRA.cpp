/* by srshashi  */

#include <bits/stdc++.h>
 
using namespace std;
const int siz = 1e5+7;

int readInt () {
	bool minuss = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minuss = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minuss)
		return -result;
	else
		return result;
}

vector<int> graph[siz];
 
int main()
{
    int t = readInt();
    while(t--){
        int n = readInt();
        int m = readInt();
        vector<vector<bool> > b(n+1,vector<bool>(n+1,0));
        bool f = 1;
        for(int i=0;i<m;i++){
            int u = readInt();
            int v = readInt();
            graph[u].push_back(v);
            if(b[u][v] == 0)
                b[u][v] = 1;
            else
                f = 0;
        }
        for(int i=0;i<=n;i++)
            sort(graph[i].begin(),graph[i].end());
        vector<int> ans(n+1,0);
        vector<vector<bool> > notAllowed(n+1,vector<bool>(n+1,0));
        int k = 1;
        for(int i = 1;i<=n && f;i++){
            if(b[i-1][i] == 0)
                f = 0;
            for(int j = i-2;j>=0 && f;j--){
                if(b[j][i] == 0){
                    if(notAllowed[i][ans[j+1]] == 1)
                        f = 0;
                    else if(!ans[i])
                        ans[i] = ans[j+1];
                    break;
                }
            }
            if(!ans[i])
                ans[i] = k++;
            for(unsigned int j=1;j<graph[i-1].size() && f;j++)
                notAllowed[graph[i-1][j]][ans[i]] = 1;
        }
        if(!f)
            cout << "-1" << endl;
        else{
            for(int i=1;i<=n;i++)
                cout << ans[i] << " ";
            cout << endl;
        }
        for(int i=0;i<=n;i++)
            graph[i].clear();
    }
    return 0;
}
