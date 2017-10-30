#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){	
    	int n,m;
        
        cin>>n>>m;
        vector<int> ad[n+1];
        while(m--){	
        	int a,b;
            
            cin>>a>>b;
            
           	if(a<b){
                ad[a].push_back(b);
           	}
        }
 
        int arr[n+1]={-1,0};
        int  edges = ad[0].size();
        int inital[edges+1];
        for(int i=1;i<=edges;i++){
            inital[i] = INT_MAX;
        }
        
        sort(ad[0].begin(),ad[0].end());
        
        for(int i=0;i<ad[0].size();i++){
            arr[ad[0][i]] = i+1;
            inital[i+1] = ad[0][i];
        }
        
        bool avai[edges+1];
        memset(avai,1,edges+1);
 
        for(int i=1;i<n;i++){
            int temp = -1, idx;
            if(ad[i].size()>edges||ad[i].size()==0){
            		goto re;
            	}
            
            for(int j=0;j<ad[i].size();++j){
                idx = ad[i][j];
                if(arr[idx]==0){
                    if(temp==-1){
                        temp = idx;
                    }
                    
                    else
                        goto re;
            	}
            }
            if(temp!=-1){
                for(int k=1;k<=edges;k++){
                    if(avai[k]&&inital[k]<=i){
                        arr[temp] = k;
                        inital[k] = temp;
                        break;
                    }
                }
            }
            
            memset(avai,0,edges+1);
            
            for(int j=0;j<ad[i].size();j++) {
                avai[arr[ad[i][j]]]=1;
            }
        }
        
        for(int i=0;i<=n;i++){
            int count = 0;
            for(int j=1;j<=edges;++j){
                if(inital[j]>i){
                    ++count;
                }
            }
            if(count!=ad[i].size()){
                goto re;
            }
        }
        for(int i=1;i<=n;i++){
        	cout<<arr[i]<<' ';
        }
 
        cout<<endl;
        continue;
        re:;
        cout<<-1<<endl;
    }
} 