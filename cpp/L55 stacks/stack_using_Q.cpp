#include<iostream>
#include<queue>
using namespace std;
int top(queue<int> q){
    int ans,i=0;
    while(i<q.size()-1){
        int t=q.front();
        q.pop();
        // cout<<q.size()<<endl;
        ans=q.front();
        q.push(t);
        i++;
    }
    q.pop();
    // q.pop();
    cout<<q.front()<<endl;
    
    return ans;
}
int main()
{
    queue<int> q;
    q.push(2);
    q.push(21);
    q.push(22);
    int t=top(q);
    cout<<t;
    return 0;
}