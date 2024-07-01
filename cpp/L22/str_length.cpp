#include<iostream>
using namespace std;

int getlength(char s[]){
    int s1=0;
    for(int i=0;s[i]!='\0';i++){
        s1++;
    }
    return s1;
}

void reverse(char str[],int l){
    int s=0;
    int e=l-1;
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
        // cout<<str<<endl;
    }
    
}
int main()
{
    char s[20]="babbar";
    int l=getlength(s);
    cout<<l;
    
    
    reverse(s,l);
    cout<<s;
    return 0;
    
}