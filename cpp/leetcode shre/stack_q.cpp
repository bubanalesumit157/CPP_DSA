#include<iostream>
#include<queue>
using namespace std;
void p(queue<int> q){
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();

    }
    cout<<endl;
}
int top(queue<int>& q){
    int ans,i=0;
    while(i<q.size()-1){
        int t=q.front();
        q.pop();
        // cout<<q.front()<<endl;
        ans=q.front();
        q.push(t);
        i++;
    }
    q.pop();
    q.push(ans);
    return ans;
}
int Pop(queue<int>& q){
    int ans,i=0;
    while(i<q.size()-1){
        int t=q.front();
        q.pop();
        // cout<<q.front()<<endl;
        ans=q.front();
        q.push(t);
        i++;
    }
    q.pop();
    // cout<<q.front()<<endl;
    
    return ans;
}
int main()
{
    queue<int> q;
    q.push(2);
    q.push(21);
    q.push(22);
    p(q);
    int t=Pop(q);
    cout<<"top ele="<<t<<endl;
    p(q);
    return 0;
}