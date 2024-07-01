#include<iostream>
#include<string>
#include<vector>
using namespace std;

string simplifyPath(string path) {
    string s;
    vector<string> stk;
    int n=path.length();
    int i=1;
    // s.push_back('/');
    while(i<n){
        string insert;
        insert.push_back('/');
        while(path[i]!='/'&&  i<path.length()){
            insert.push_back(path[i]);
            i++;
        }

        if(insert=="/.." && stk.size()>0){
            stk.pop_back();
        }

        else if(insert.length()>1 && insert!="/." && insert!="/.."){
            stk.push_back(insert);
        }
        i++;  // for skipping '/'

    }
    i=0;
    while(i<stk.size()){
        s.insert(s.size(),stk[i]);
        i++;
    }
    if(s.size()==0){
        s.push_back('/');
    }
    return s;
}
int main()
{
    string s="/home/user/Documents/../Pictures/./khdff///../ho";
    string d="/../";
    string a= simplifyPath(d);
    cout<<s<<" ,, "<<a<<endl;
    
    return 0;
}