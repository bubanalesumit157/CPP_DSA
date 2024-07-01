#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<queue>
#include<stack>
using namespace std;

void bfs(vector<int> &ans ,unordered_map<int,bool>& visited,unordered_map<int,list<int>> adj_list,int node){
    queue<int> q;
    q.push(node); 
    visited[node]=1;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);
        for(auto i:adj_list[front]){
          if (visited[i] == 0) {
            q.push(i);
            visited[i] = 1;
          }
        }
    }
}
vector<int> bfsTraversal(int n,unordered_map<int,list<int>> adj_list){
    // Write your code here.
    vector<int> ans;
    unordered_map<int,bool> visited;
    if(visited[0]==0){
        bfs(ans,visited,adj_list,0);
    }
    return ans;
    
}




void dfs(vector<int>& ans,unordered_map<int,bool>& visited,unordered_map<int,list<int>>& adj_list,int node){
    
    visited[node]=1;
    ans.push_back(node);
    // list<int>:: iterator i;
    // for( i=adj_list[node].begin();i!=adj_list[node].end();++i){
    //     if(visited[*i]==0){
    //         dfs(ans,visited,adj_list,*i);
    //     }
    // }
    for(auto i:adj_list[node]){
        if(visited[i]==0){
            dfs(ans,visited,adj_list,i);
        }
    }
}


vector<int> dfsTraversal(int n,int e, unordered_map<int,list<int>> &adj){
    // Write your code here.
    vector<int> ans;
    unordered_map<int,bool> visited;
    
    dfs(ans,visited,adj,0);
    return ans;
}


void bridge(vector<vector<int>> ad,int n,int e){
    vector<vector<int>> b_ans;
    for(int j=0;j<e;j++){
        unordered_map<int,list<int>> adj;
        for(int i=0;i<e;i++){
            if(i!=j){
                int u=ad[i][0];
                int v=ad[i][1];
                adj[u].push_back(v);
                adj[v].push_back(u);
            }            
        }
        vector<int> ans=  dfsTraversal(n,e,adj);
        if(ans.size()<n){
            vector<int> a;
            a.push_back(ad[j][0]);
            a.push_back(ad[j][1]);
            b_ans.push_back(a);
        }      
    }

    for(int i=0;i<b_ans.size();i++){
       
        cout<<b_ans[i][0]<<" "<<b_ans[i][1]<<endl;
        
    }
}
int main()
{
     vector<vector<int>> l;
     int e=4;
     int n=6;
    for(int i=0;i<e;i++){
        vector<int> v;
        v.push_back(0);
        v.push_back(0);
        for(int j=0;j<2;j++){
            l.push_back(v);
        }
    }
    l[0][0]=0;
    l[0][1]=1;

    l[1][0]=1;
    l[1][1]=2;

    l[2][0]=1;
    l[2][1]=3;

    l[3][0]=3;
    l[3][1]=4;

    // l[4][0]=3;
    // l[4][1]=4;

    // l[5][0]=4;
    // l[5][1]=5;

    // l[6][0]=0;
    // l[6][1]=4;
    
    
    for(int i=0;i<e;i++){
        for(int j=0;j<2;j++){
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"b start"<<endl;
    bridge(l,n,e);
    cout<<"b end"<<endl;
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++){
        
            int u=l[i][0];
            int v=l[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        
    }

    cout<<endl<<"adj_list"<<endl;
    for(auto i:adj){
        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<j<<",";
        }
        cout<<endl;
    }
    cout<<"adj.size="<<adj.size()<<endl;
    vector<int> ans=  dfsTraversal(n,e,adj);
    cout<<endl<<ans.size()<<endl;
    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}