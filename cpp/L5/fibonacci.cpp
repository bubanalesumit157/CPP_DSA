#include<iostream>
using namespace std;

int main()  
{
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    int n=3;
    for(int i=0;i<n;i++){
        int ans=a+b;
        a=b;
        b=ans;
        cout<<ans<<" ";
    }
    return 0;
}