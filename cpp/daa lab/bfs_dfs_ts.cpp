#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
#include<list>
using namespace std;


unordered_map<int,list<int>> adjmatrix(int n, vector<vector<int>> &adj){
    unordered_map<int,list<int>> adj_list;
    for(int i=0;i<n;i++){
        int u=adj[i][0];
        int v=adj[i][1];
        adj_list[u].push_back(v);
    }
    return adj_list;
}

void bfs( unordered_map<int,bool>& visited, unordered_map<int,list<int>>& adj,int node,vector<int>& ans ){
    queue<int> q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int ele=q.front();
        q.pop();
        ans.push_back(ele);
        for(auto i:adj[ele]){
            if(visited[i]==0){
                q.push(i);
                visited[i]=1;
            }
        }

    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    vector<int> ans;
    unordered_map<int,bool> visited;
    unordered_map<int,list<int>> adj_list;
    adj_list=adjmatrix(n,adj);
    if(visited[0]==0){
        bfs(visited,adj_list,0,ans);
    }
    return ans;
    
}


void dfs(vector<int>& ans,unordered_map<int,bool>& visited,unordered_map<int,list<int>>& adj,int node){
    ans.push_back(node);
    visited[node]=1;
    for(auto i:adj[node]){
        if(visited[i]==0){
            dfs(ans,visited,adj,i);
        }
    }
}

vector<int> dfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    vector<int> ans;
    unordered_map<int,bool> visited;
    unordered_map<int,list<int>> adj_list;
    adj_list=adjmatrix(n,adj);
    if(visited[0]==0){
        dfs(ans,visited,adj_list,0);
    }
    return ans;
}

void ts(vector<int>& ans,unordered_map<int,bool>& visited,unordered_map<int,list<int>>& adj,int node){
    for(auto i:adj[node]){
        if(visited[i]==0){
            ts(ans,visited,adj,i);
        }
    }
    ans.push_back(node);
    visited[node]=1;
    
}    

vector<int> topoTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    vector<int> ans;
    unordered_map<int,bool> visited;
    unordered_map<int,list<int>> adj_list;
    adj_list=adjmatrix(n,adj);
    // if(visited[0]==0){
        ts(ans,visited,adj_list,0);
    // }
    return ans;
}


int main()
{
    // cout<<1<<endl;
    vector<vector<int>> l;
    int n=5;
    for(int i=0;i<n;i++){
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
    l[1][1]=3;

    l[2][0]=1;
    l[2][1]=2;

    l[3][0]=3;
    l[3][1]=2;

    l[4][0]=2;
    l[4][1]=4;

    // l[5][0]=1;
    // l[5][1]=5;

    // l[6][0]=5;
    // l[6][1]=7;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }

    unordered_map<int,list<int>> adj_list=adjmatrix(n,l);
    for(auto i=0;i<n;i++){
        cout<<i<<"->";
        for(auto j :  adj_list[i]){
            cout<<j<<",";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<"bfs order : ";
    vector<int> ans=  bfsTraversal(n,l);
    for(auto i: ans){
        cout<<i<<" ";
    }

    cout<<endl<<endl<<"dfs order : ";
    ans=  dfsTraversal(n,l);
    for(auto i: ans){
        cout<<i<<" ";
    }

    cout<<endl<<endl<<"ts order : ";
    ans=  topoTraversal(n,l);
    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}