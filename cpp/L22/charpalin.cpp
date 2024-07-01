#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

char tolowerr(char ch){
    
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        ch=ch-'A'+'a';
        return ch;
    }
    return ch;
}

void checkpalindrome(vector<char> &ch){
    int n=ch.size();
    int s=0;
    int e=n-1;
    int f=0;

    for(int i=0;i<=n/2;i++){
        if(ch[s]==ch[e]){
            f=1;
            s++;
            e--;
        }
        else{
            f=0;
            break;
        }
    }

    if(f==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    string ch="0P";

    // upper to lower case
    transform(ch.begin(),ch.end(),ch.begin(),::tolower);
    vector<char> chh;
    // 97-122 for alps 48-47 for nums
    for(int i=0;ch[i]!='\0';i++){
        int j=ch[i];
        if((j>=97 && j<=122) ||(j>=48 && j<=57)){
            chh.push_back(ch[i]);
        }
    }
    char ch1='A';
    cout<<tolowerr(ch1)<<endl;
    for(auto i:chh){
        cout<<i;
    }
    cout<<endl;
    checkpalindrome(chh);


    return 0;
}