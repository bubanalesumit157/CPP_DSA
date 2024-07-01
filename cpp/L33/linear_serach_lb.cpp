#include<iostream>
using namespace std;
bool ls(int arr[],int n,int k){
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        return ls(arr+1,n-1,k);
    }
}
int main()
{
    int arr[4]={3,4,6,7};
    int k=7;
    cout<<ls(arr,4,k);
    return 0;
}