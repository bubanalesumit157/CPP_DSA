#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
#include<stack>
#include<list>
#include<limits.h>
using namespace std;



bool shortest_path(int &pc,int src_nxt,int dest,unordered_map<int,list<int>>& adj,unordered_map<int,bool>& visited){
    // cout<<"ans="<<n<<endl;
    // visited[n]=true;
    if(src_nxt==dest){
        pc++;
        return 1;
    }
    else if(adj[src_nxt].size()==1){
        return 0;
    }

    // int c=INT_MAX
    bool b_r=0;
    for(auto i:adj[src_nxt]){
        cout<<i<<endl;
        if(visited[i]==0){
            visited[i]=1;
            bool n=shortest_path(pc,i,dest,adj,visited);
            b_r= n | b_r;
        }
    }
    if(b_r==1){
        pc++;
        return 1;
    }
    else{
        return 0;
    }
}



int short_p_dfsTraversal(int src, int dest,unordered_map<int,list<int>> adj)
{
    int ans;
   
    int mini=INT_MAX;
    
    for(auto i:adj[src]){
        unordered_map<int,bool> visited; 
        visited[src]=1;
        int path=0;
        int p=shortest_path(path,i,dest,adj,visited);
        cout<<"dist["<<i<<"] = "<<path<<endl;
        if(p!=0){
            ans=min(mini,path);
        }
    }
    return ans;
}



vector<int> shortest_path_2(int src,int dest,unordered_map<int,list<int>> adj){
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;
    queue<int> q;
    q.push(src);
    visited[src]==1;
    parent[src]=-1;
    cout<<"BFS=";
    while(q.size()!=0){
        int front = q.front();
        q.pop();
        
        for(auto i:adj[front]){
            if(visited[i]==0){
                // cout<<front<<" "<<i<<endl;
                visited[i]=1;
                q.push(i);
                // if(parent[i]==0){
                    parent[i]=front;
                // }
            }
        }

    }
    // cout<<endl<<endl;
    // for(auto i=1;i<9;i++){
    //     cout<<parent[i]<<" ";
    // }
    int i=dest;
    vector<int> path;
    path.push_back(dest);
    while(i!=src){
        i=parent[i];
        path.push_back(i);
    }
    int s=0,e=path.size()-1;
	while(s<e){
		swap(path[s],path[e]);
		s++;
		e--;
	}
    return path;
}


int main()
{
    vector<vector<int>> l;
    int n=8;
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

    l[1][0]=1;
    l[1][1]=3;

    l[2][0]=1;
    l[2][1]=4;

    l[3][0]=2;
    l[3][1]=5;

    l[4][0]=6;
    l[4][1]=7;

    l[5][0]=3;
    l[5][1]=8;

    l[6][0]=4;
    l[6][1]=6;

    l[7][0]=5;
    l[7][1]=8;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }

    unordered_map<int,list<int>> adj;
    for(int i=0;i<n;i++){
        
            int u=l[i][0];
            int v=l[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        
    }

    for(auto i:adj){
        cout<<i.first<<" -> ";
        for(auto j:i.second){
            cout<<j<<",";
        }
        cout<<endl;
    }
    unordered_map<int,bool> visited;

    vector<int> ans =  shortest_path_2(1,8,adj);

    cout<<endl<<"ans = "<<endl;
    for(auto i: ans){
        cout<<i<<"-> ";
    }
    return 0;
}