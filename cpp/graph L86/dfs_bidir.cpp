#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
#include<list>
using namespace std;



void dfs(int n,unordered_map<int,list<int>>& adj,unordered_map<int,bool>& visited,vector<int>& component){
    cout<<"ans="<<n<<endl;
    component.push_back(n);
    visited[n]=true;
    // list<int>::iterator i;
    // for( i=adj[n].begin();i!=adj[n].end();i++){
    //     if(visited[*i]==0){
    //         dfs(*i,adj,visited,component);
    //     }
    // }

    for(auto i:adj[n]){
        if(visited[i]==0){
            dfs(i,adj,visited,component);
        }
    }
}
vector<vector<int>> dfsTraversal(int V, int E, vector<vector<int>> &edges,unordered_map<int,list<int>> adj)
{
    vector<vector<int>> ans;
    unordered_map<int,bool> visited;
    // adj=join(V,edges);
    for(int i=0;i<V;i++){
        if(visited[i]==0){
            vector<int> component;
            dfs(i,adj,visited,component);
            ans.push_back(component);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> l;
    for(int i=0;i<9;i++){
        vector<int> v;
        v.push_back(0);
        v.push_back(0);
        for(int j=0;j<2;j++){
            l.push_back(v);
        }
    }
    l[0][0]=0;
    l[0][1]=1;

    l[1][0]=0;
    l[1][1]=2;

    l[2][0]=0;
    l[2][1]=5;

    l[3][0]=3;
    l[3][1]=6;

    l[4][0]=7;
    l[4][1]=4;

    l[5][0]=4;
    l[5][1]=8;

    l[6][0]=7;
    l[6][1]=8;
    
    for(int i=0;i<7;i++){
        for(int j=0;j<2;j++){
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }

    unordered_map<int,list<int>> adj;
    for(int i=0;i<l.size();i++){
        
            int u=l[i][0];
            int v=l[i][1];
            adj[u].push_back(v);
            // adj[v].push_back(u);
        
    }
    vector<vector<int>> ans=  dfsTraversal(9,7,l,adj);
    cout<<endl<<ans[0].size()<<endl;
    // for(auto i: ans){
    //     cout<<i<<" ";
    // }
    return 0;
}