#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("sh");
    q.push("shss");
    q.push("shff");
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front();
    
    return 0;
}