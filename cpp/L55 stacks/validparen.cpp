#include<iostream>
#include<vector>
using namespace std;

bool findRedundantBrackets(string &s)
{
    // Write your code here.
    int i=0;
    int flag=0;
    vector<char> c;
    while(i<s.size()){
        // cout<<s.at(i)<<endl;
        if(s.at(i)!=')' ){
            c.push_back(s.at(i));
        } 
        else {
            char ch;
            ch= c.back();
            while(ch!='('){
                if (ch == '+' || ch == '*' || ch == '/' || ch == '-') {
                    flag = 1;
                }
                c.pop_back();
                ch=c.back();
            }
            if(flag==0){
                return 1;
            }
            flag=0;
            c.pop_back();
        }
        i++;
    }
    
        return 0;
    
}


int main()
{
    string ch="((a+b))";
    bool n=findRedundantBrackets(ch);
    cout<<endl<<n;
    return 0;
}