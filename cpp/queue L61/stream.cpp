#include<iostream>
#include<queue>
#include<unordered_map>
#include<string>
using namespace std;


string FirstNonRepeating(string A){
    // Code here
    string s;
    unordered_map<char,bool> v;
    queue<char> q;
    q.push(A[0]);
    s.push_back(A[0]);
    v[A[0]]=true;
    int i=1;
    while(i<A.length()){
        if(v[A[i]]==true){
            s.push_back('#');
            //  q.pop();
        }
        else{
            q.pop();
            q.push(A[i]);
            v[A[i]]=true;
            s.push_back(q.front());
        }
        i++;
    }
    return s;
}
int main()
{
    string s="aabc";
    string k=FirstNonRepeating(s);
    cout<<k<<endl;
    return 0;
}