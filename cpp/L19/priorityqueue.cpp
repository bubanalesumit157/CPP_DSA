#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater<int>> mini;
    maxi.push(1);
    maxi.push(13);
    maxi.push(14);
    cout<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(1);
    mini.push(13);
    mini.push(14);
    cout<<mini.size()<<endl;
    int n1=mini.size();
    for(int i=0;i<n1;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    return 0;
}