#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(12);
    s.insert(12);
    s.insert(1212);
    s.insert(112);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl<<s.count(12)<<endl;
    cout<<s.count(1)<<endl;
    set<int>::iterator itr=s.find(1);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    return 0;
}