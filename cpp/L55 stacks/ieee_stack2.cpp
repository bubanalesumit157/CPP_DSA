#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
void p(stack<int> s){
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int middle(stack<int> s,int mid_index){
    while(mid_index>0){
        s.pop();
        mid_index--;
    }
    return s.top();
}

void replace_ele(stack<int> &s,int mid){
    if(s.size()==1){
        s.pop();
        s.push(mid);
        return;
    }
    int ele=s.top();
    s.pop();
    replace_ele(s,mid);
    s.push(ele);
}

void replace(stack<int>& s){
    if(s.size()==0 || s.size()==1){
        return;
    }
    int size=s.size();
    int mid_index=ceil(size/2);
    int mid = middle(s,mid_index);
    replace_ele(s,mid);
    s.pop();
    s.push(mid);

}
int main()
{
    stack<int> s;
    s.push(4);
    // s.push(5);
    // s.push(6);
    // s.push(61);
    // s.push(2);
    p(s);
    replace(s);
    p(s);
    return 0;
}