#include<iostream>
using namespace std;

int f(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans=f(n-1)+f(n-2);
    return ans;
}
int main()
{
    int n=6;
    cout<<f(n);

    return 0;
}