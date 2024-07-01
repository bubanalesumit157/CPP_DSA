#include<iostream>
using namespace std;
bool palin(string s,int i,int j){
    if(i>=j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        return palin(s,++i,--j);
    }
}
int main()
{
    string s="sasss";
    cout<<palin(s,0,4);
    return 0;
}