#include<iostream>
#include<string>
#include<unordered_map>
#include<queue>
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
        if(v[A[i]]==true && q.size()>0 && q.front()==A[i]){
            
                
            s.push_back('#');
                q.pop();
            
            //  q.pop();
        }
        else{
            
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
    string s="tcpmxaixsswjelbswxytyhbwjinuhxhvpwaybmdhndafszoghpyzdahiqsgluufqcekjk";
    cout<<s<<endl<<FirstNonRepeating(s)<<endl;

    return 0;
}