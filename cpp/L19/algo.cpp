#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(22);
    v.push_back(52);
    cout<<binary_search(v.begin(),v.end(),52)<<endl;
    string a="abcd";
    reverse(a.begin(),a.end());
    cout<<a;
    return 0;
}