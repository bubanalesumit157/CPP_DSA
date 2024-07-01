#include<iostream>
#include<string>
using namespace std;


string simplifyPath(string path) {
    string s;
    int n=path.length();
    int i=1;
    s.push_back('/');
    while(i<n){
        string insert;
        
        while(path[i]!='/' && i<path.length()){
            insert.push_back(path[i]);
            i++;
        }
        
        cout<<i<<" "<<insert<<" "<<"  s="<<s<<endl;
        if(insert==".." && s.length()>2){
            s.pop_back();
            while(s.back()!='/'){
                s.pop_back();
            }
            // s.pop_back();
        }
        else if(insert.length()>=1 && insert!="."){
            
            s.insert(s.length(),insert);
            s.push_back('/');
            
        }
        
        i++;  // for skipping '/'
    }
    s.pop_back();
    
    return s;
}
int main()
{
    string s;
    string  path = "/../";

    s=simplifyPath(path);
    cout<<"ans="<<s;
    return 0;
}