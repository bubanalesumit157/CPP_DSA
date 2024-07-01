#include<iostream>
#include<unordered_map>
#include<stack>
#include<list>
#include<vector>
#include<limits.h>
using namespace std;
class shortest_path{
public:
    unordered_map <int,list<pair<int,int>>> adj;
    void addedge(int u,int v,int wt){
        pair<int,int> p = make_pair(v,wt);
        adj[u].push_back(p);

    }

    void print(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<"( "<<j.first<<","<<j.second<<"),";
            }
            cout<<endl;
        }
    }

    void ts(int src,unordered_map<int,bool>& visited,stack<int>& s){
        visited[src]=1;
        for(auto i:adj[src]){
            if(visited[i.first]==0){
                ts(i.first,visited,s);
            }
        }
        s.push(src);
    }


    void cal_dist(int src,stack<int> s,vector<int>& dist){
        dist[src]=0;
        while(s.size()!=0){
            int top=s.top();
            s.pop();
            if(dist[top]!=INT_MAX){
                for(auto i: adj[top]){
                    int new_d = dist[top]+i.second;
                    if(new_d < dist[i.first]){
                        dist[i.first] = new_d;
                    }
                }
            }
        }
    }
};


void print_stack(stack<int> s){
    while(s.size()!=0){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main()
{
    shortest_path g;
    g.addedge( 0,1,5 );
    g.addedge( 0,2,3);
    g.addedge(1,2,2 );
    g.addedge(1,3,6 );
    g.addedge(2,3,7 );
    g.addedge(2,4,4 );
    g.addedge(2,5,2 );
    g.addedge(3,4,-1 );
    g.addedge(4,5,-2 );

    g.print();
   

    cout<<"topological sort:"<<endl;
    stack<int> s;
    unordered_map<int,bool> visited;
    int n=6;
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            g.ts(i,visited,s);
        }
    }
    cout<<s.size()<<" stack:";
    print_stack(s);


    int src=1;
    vector<int> dist(n);
    for(int i=0;i<n;i++){
        dist[i]=INT_MAX;
    }    
    cout<<endl;
    dist[src]=0;

    visited[src]=0;
    for(int i=0;i<n;i++){
        int top=s.top();
        s.pop();
        if(top==src){
            visited[src]=1;
        }
        if(visited[src]==1){
            // cout<<"v"<<endl;
            for(auto j: g.adj[top]){
                int new_d = dist[top]+j.second;
                cout<<i<<" "<<new_d<<endl;
                if(new_d < dist[j.first]){
                    dist[j.first]=new_d;
                }
            }
        }

    }
    // g.cal_dist(src,s,dist);
    for(auto i:dist){
        cout<<i<<" ";
    }    
    return 0;
}