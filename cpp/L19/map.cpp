#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m[1]="bar1";
    m[23]="bar2";
    m[3]="bar3";
    m.insert({4,"ee"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<m.count(3)<<endl;
    m.erase(3);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=m.find(4);
    for(auto itr=it;itr!=m.end();itr++){
        cout<<(*itr).first<<endl;
    }
    return 0;
}