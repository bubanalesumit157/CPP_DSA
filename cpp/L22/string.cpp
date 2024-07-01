#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[7]="caaa";
    string w;
    char ss[7]="caa";
    // s[1]='\0';
    // ss[1]='\0';
    int l=w.length();
    cout<<s;
    // cout<<l<<endl;
    // cout<<s<<"  "<<ss<<endl;
    // s.push_back('s');
    // s.push_back('s');
    cout<<s<<endl;
    cout<<ss<<endl;
    // s.pop_back();
    // cout<<s<<endl;
    // cin.getline(w,4);
    // cin>>ss;
    // cin.getline(ss,4);s
    // cout<<w<<endl;
    // cout<<ss<<endl;
    cout<<strcmp(s,ss)<<endl;
    char src[4]="ga";
    char destn[4]="ga";
    strcpy(destn,src);
    cout<<destn<<endl;
    cout<<strlen(s);
    return 0;
}