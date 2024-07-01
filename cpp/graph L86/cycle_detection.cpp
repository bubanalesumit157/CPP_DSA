#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
#include<list>
#include<ctime>
using namespace std;


void cycle_detection(vector<int> &ans ,unordered_map<int,bool>& visited,unordered_map<int,list<int>> adj_list,int node){
    queue<int> q;
    unordered_map<int,int> parent;
    q.push(node); 
    visited[node]=1;
    parent[node]=-1;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);
        for(auto i:adj_list[front]){
          if (visited[i] == 0) {
            q.push(i);
            visited[i] = 1;
            parent[i]=front;
          }
          else if(visited[i]==1 && parent[front]!=i){
            cout<<"cycle at node: "<<i<<endl;
          }
           
        }
    }
}

unordered_map<int,list<int>> adjmatrix(int n, vector<vector<int>> &adj){
    unordered_map<int,list<int>> adj_list;
    for(int i=0;i<n;i++){
        int u=adj[i][0];
        int v=adj[i][1];
        adj_list[u].push_back(v);
        // adj_list[v].push_back(u);
    }
    return adj_list;
}


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
vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    vector<int> ans;
    unordered_map<int,bool> visited;
    unordered_map<int,list<int>> adj_list;
    adj_list=adjmatrix(n,adj);
    // bfs(ans,visited,adj_list,0);
    for(int i=0;i<n;i++){
        cycle_detection(ans,visited,adj_list,i);
    }
    return ans;
    
}


void dfs_cycle(int p,vector<int>& ans,unordered_map<int,bool>& visited,unordered_map<int,list<int>>& adj_list,int node){
    visited[node]=1;
    unordered_map<int,int> parent;
    parent[node]=p;
    
    for(auto i:adj_list[node]){
        if(visited[i]==1 &&  i !=parent[node]){
            cout<<"ccyle"<<endl;
        }
        else if(visited[i]==0){
            dfs_cycle(node,ans,visited,adj_list,i);
        }
        
    }
}


vector<int> dfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    vector<int> ans;
    unordered_map<int,bool> visited;
    unordered_map<int,list<int>> adj_list;
    adj_list=adjmatrix(n,adj);
    int z=1;
    if(visited[1]==0){
        dfs_cycle(-1,ans,visited,adj_list,z);
    }
    return ans;
}



int cycle(int target,int node,unordered_map<int,list<int>>& adj,unordered_map<int,bool>& visited){
    
    // base case
    if(node==target && visited[node]==1){
        return 1;
    }
    if(visited[node]==1){
        return 0;
    }

    visited[node]=1;
    int c=0;
    for(auto i:adj[node]){
        c+= cycle(target,i,adj,visited);
    }
    return c;
}


int main()
{
    // cout<<1<<endl;
    vector<vector<int>> l;
    int n=6;
    for(int i=0;i<n;i++){
        vector<int> v;
        v.push_back(0);
        v.push_back(0);
        for(int j=0;j<2;j++){
            l.push_back(v);
        }
    }
    l[0][0]=1;
    l[0][1]=2;

    l[1][0]=2;
    l[1][1]=3;

    l[2][0]=3;
    l[2][1]=4;

    l[3][0]=5;
    l[3][1]=4;

    l[4][0]=6;
    l[4][1]=5;

    l[5][0]=4;
    l[5][1]=6;

    // l[6][0]=6;
    // l[6][1]=7;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }

    int v=6;
    unordered_map<int,list<int>> adj_list=adjmatrix(n,l);
    for(auto i=1;i<=v;i++){
        cout<<i<<"->";
        for(auto j :  adj_list[i]){
            cout<<j<<",";
        }
        cout<<endl;
    }
    

    cout<<"the cycle is:";
    int f=0;
    for(int i=1;i<=v;i++){
        unordered_map<int,bool> visited;
        int ans=cycle(i,i,adj_list,visited);
        if(ans>0){
            cout<<"present"<<endl;
            f=1;
            break;
        }
    }

    if(f==0){
        cout<<"absent";
    }
    
    // clock_t s=clock();
    
    // vector<int> ans=  bfsTraversal(n,l);
    // cout<<ans.size()<<endl<<endl<<"bfs order : ";
    // for(auto i: ans){
    //     cout<<i<<" ";
    // }

    // cout<<endl<<endl<<"dfs order : ";
    // ans=  dfsTraversal(n,l);
    // for(auto i: ans){
    //     cout<<i<<" ";
    // }
    // clock_t e=clock();
    // cout<<"time"<<(double)(e-s)/CLOCKS_PER_SEC<<endl;
    return 0;
}