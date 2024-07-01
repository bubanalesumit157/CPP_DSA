#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="aaaaaaaa";
    int l=s.length()-1;
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            if(s[j]==s[j+1]){
                s.erase(j,2);
                cout<<s<<" "<<i<<endl;
                break;
            }
        }
    }
    cout<<s;
    return 0;
}