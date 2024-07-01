#include<iostream>
using namespace std;
gcd_euclid(int m,int n){
    while(n>0){
        m=n;
        n=m%n;
    }
    return m;
}

int gcd(int m,int n){
    if(n==0){
        return m;
    }
    else{
        return gcd(n,m%n);
    }
}
int main()
{
    int m=8,n=4;
    cout<<gcd_euclid(m,n)<<endl<<gcd(m,n);
    return 0;
}