#include<iostream>
using namespace std;
int sqrt(int n){
    int s=1,e=n-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        int p=mid*mid;
        if(p==n){
            return mid;
        }
        else if(p>n){
            e=mid-1;
        }
        else{
            s=mid+1;
            ans=mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n=26;
    cout<<sqrt(n);
    return 0;
}