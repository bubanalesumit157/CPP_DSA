#include<iostream>
#include<queue>
using namespace std;
queue<int> rev(queue<int> q)
{
    int n=q.size();
    while(n>0){
        int t=q.back();
        q.pop();
        q.push(t);
        n--;
    }
    return q;
}

void revv(queue<int>& q,int k){
    if(k==0){
        return;
    }
    int t=q.front();
    q.pop();
    k--;
    revv(q,k);
    q.push(t);
}
void p(queue<int> q){
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(1);    
    q.push(2);    
    q.push(3); 
    q.push(4); 
    p(q); 
    int k=2;
    revv(q,k);
    cout<<endl;
    p(q);   
    return 0;
}