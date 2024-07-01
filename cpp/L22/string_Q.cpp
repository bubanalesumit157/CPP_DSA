#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s="he LL";
    string s2;
    vector<char> s1;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            s1.push_back('@');
            s1.push_back('4');
            s1.push_back('0');
        }
        else{
            s1.push_back(s[i]);
        }
    }
    for(auto i:s1){
        s2.push_back(i);
    }
    cout<<s2;
    return 0;
}