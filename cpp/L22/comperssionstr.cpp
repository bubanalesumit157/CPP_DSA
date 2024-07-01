#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> a={"a","b","c"};
    vector<string> s;
    int i=0;
    s.push_back(a[0]);
    int j=1,l=1;
    while(i<a.size()-1){
        if(a[i]==a[i+1]){
            j++;
            i++;
        }
        else{
            string c=to_string(j);
            if(j>1){
                s.push_back(c);
            }
            i++;
            j=1;
            s.push_back(a[i]);
        }
    }
    if(a.size()!=1){
        string c=to_string(j);
        s.push_back(c);
    }
    for(auto i:s){
        cout<<i;
    }
    return 0;
}