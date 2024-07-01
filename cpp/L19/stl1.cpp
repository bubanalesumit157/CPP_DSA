#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5,4);
    vector<int> las(a);
    for(int i:las){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    cout<<"b4 pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"f "<<v.front()<<endl<<v.back()<<endl;

    cout<<"capacity "<<v.capacity()<<endl;
    cout<<v.at(1)<<endl;
    v.clear();

    cout<<v.size()<<endl;
    return 0;
}