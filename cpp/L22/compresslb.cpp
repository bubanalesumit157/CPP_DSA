#include<iostream>
#include<vector>
using namespace std;


int compress(vector<char> &chars){
    int i=0;
    int ansindex=0;
    int n=chars.size();
    
    while(i<n){
        int j=i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }
        chars[ansindex]=chars[i];
        cout<<chars[ansindex]<<endl;
        ansindex++;
        
        int count=j-i;
        if(count>1){
            string c=to_string(count);
            for(char ch:c){
                chars[ansindex]=ch;
                cout<<chars[ansindex]<<endl;
                ansindex++;
            }
        }
        cout<<ansindex<<endl<<endl;
        i=j;
    }
    
    
    return ansindex;
}
int main()
{
    vector<char> s={'a','b','c'};
    cout<<compress(s)<<endl;
    for(char i:s){
        cout<<i;
    }
    return 0;
}