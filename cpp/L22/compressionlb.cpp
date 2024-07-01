#include<iostream>
#include<vector>
using namespace std;


int compress(vector<char> chars){
    int i=0;
    int ansindex=0;
    int n=chars.size();
    
    while(i<n){
        int j=i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }
        chars[ansindex++]=chars[i];
        
        int count=j-i;
        if(j>1){
            string c=to_string(count);
            for(char ch:c){
                chars[ansindex++]=ch;
            }
        }
        i=j;
    }
    
    return ansindex;
}
int main()
{
    vector<char> s="aabbc";
    cout<<compress(s)<<endll;
    cout<<s;
    return 0;
}