#include<iostream>
#include<string>
using namespace std;

void strrev(string &s,int i,int j){
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    strrev(s,i,j);
}
string revrec(string s,int n,int i=0){
    if(i==n-1){
        string l;
        l.push_back(s.at(n-1));
        return l;
    }
    else{
        string t=revrec(s,n,++i);
        t.push_back(s.at(i-1));
        // cout<<t<<" "<<i<<endl;
        return t;
    }
}

string rev(string s,int n){
    for(int i=0;i<s.size()/2;i++){
        char ch=s.at(i);
        s.at(i)=s.at(n-i-1);
        s.at(n-i-1)=ch;
    }
    return s;
}
int main()
{
    string s="abcdef";
    int n=s.size();
    cout<<rev(s,n)<<2<<endl;
    cout<<revrec(s,n)<<1<<endl;
    strrev(s,0,5);
    cout<<s<<3;
    return 0;
}