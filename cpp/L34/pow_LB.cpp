#include<iostream>
using namespace std;
int pow(int n,int p){
    if(p==0){
        return 1;
    }
    if(p==1)
    {
        return n;
    }
    int ans=pow(n,p/2);
    if(p%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*n;
    }
}
int main()
{
    int n=3,p=2;
    cout<<pow(n,p);
    return 0;
}