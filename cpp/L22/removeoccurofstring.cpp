#include<iostream>
using namespace std;
string removeOccurrences(string s, string part) {
       
        while(s.length()!=0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    }

int main()
{
    string s="aaaalaaa",part="aa";
    cout<<removeOccurrences(s,part);
    return 0;
}