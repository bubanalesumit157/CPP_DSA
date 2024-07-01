#include<iostream>
using namespace std;
bool isvalid(char s){
    if((s>='a'&& s<='z')||(s>='A' && s<='Z')||(s>=48 && s<=57)){
        return true;
    }
    else{
        return false;
    }
}

char lower(char s){
    if(s>='A' && s<='Z'){
        s= s-'A'+'a';
    }
    return s;
}

void ispalin(string s){
    int n=s.length();
    int s1=0,e=n-1;
    int f=0;
    for(int i=0;i<n/2;i++){
        if(s[s1]==s[e]){
            f=1;
            s1++;
            e--;
        }
        else{
            f=0;
            break;
        }
    }
    if(f==1){
        cout<<"T"<<endl;
    }
    else{
        cout<<"F"<<endl;
    }
}
int main()
{
    string s="sum It";
    string ss;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(isvalid(s[i])){
            ss.push_back(lower(s[i]));
        }
    }
    cout<<ss<<endl;
    ispalin(ss);
    return 0;
}