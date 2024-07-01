#include<iostream>
#include<stack>
using namespace std;
void p(stack<int> q){
    while(q.size()>0){
        cout<<q.top()<<" ";
        q.pop();

    }
    cout<<endl;
}

int front(stack<int>& s){
    if(s.size()==1){
        int t=s.top();
        return t;
    }
    int temp = s.top();
    s.pop();
    int ans=front(s);
    s.push(temp);
    return ans;
}

void POP(stack<int>& s){
    if(s.size()==1){
        // cout<<s.top();
        s.pop();
        return;
    }
    int temp = s.top();
    // cout<<temp<<endl;
    s.pop();
    POP(s);
    s.push(temp);
}

int main()
{
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    p(s);
    // int t=front(s);
    // cout<<t<<endl;
    POP(s);
    s.top();
    return 0;
}