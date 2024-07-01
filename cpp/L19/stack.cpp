#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("sh");
    s.push("shss");
    s.push("shff");
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    return 0;
}