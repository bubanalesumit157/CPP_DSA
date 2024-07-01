#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    list<int> l1(2,3);
    for(int i:l1){
        cout<<i<<" ";
    }
    l.push_back(3);
    l.push_front(4);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
    
    return 2;
    // cout<<"hey";
}