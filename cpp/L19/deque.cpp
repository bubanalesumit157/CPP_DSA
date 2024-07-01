#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> a;
    a.push_back(2);
    a.push_back(1);
    a.push_front(7);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl<<a.front()<<endl<<a.back()<<endl<<a.empty()<<endl;
    a.erase(a.begin(),a.begin()+1);
    // a.pop_front();
    for(int i:a){
        cout<<i<<" ";
    }

    return 0;
}