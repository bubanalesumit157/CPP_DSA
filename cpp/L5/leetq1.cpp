#include<iostream>
using namespace std;

int main()
{
    int n=234;
    int rem,d,s=0,p=1;
    while(n>0){
        d=n%10;
        p=p*d;
        s+=d;
        n/=10;
    }
    cout<<p-s;
    return 0;
}