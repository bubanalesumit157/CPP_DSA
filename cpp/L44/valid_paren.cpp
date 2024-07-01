#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isValid(string s){
    int i=0;
    vector<char> stack;
    // cout<<s[5]<<" "<<s.length()<<endl;
    while(i<s.length()){
        char ch=s.at(i);
        if(ch=='(' || ch=='{' || ch=='['){
            stack.push_back(ch);
        }

        else{
            switch(ch){
                case ')':
                    if(stack.back()!='('){
                        return 0;
                    }
                    break;
                case ']':
                    if(stack.back()!='['){
                        return 0;
                    }
                    break;
                case '}':
                    if(stack.back()!='{'){
                        return 0;
                    }
                    break;
            }
            
            stack.pop_back();
        }
        i++;
        cout<<i<<endl;
    }
    if(stack.size()!=0){
        return 0;
    }
    return 1;   
}


int main()
{
    string ch="(){}}{";
    cout<<"ans="<<isValid(ch);
    return 0;
}