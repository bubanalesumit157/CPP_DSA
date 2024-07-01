#include<iostream>
using namespace std;
int ls(int arr[],int n,int k,int i=0){
    if(i>=n){
        return -1;
    }
    if(arr[i]==k){
        return i;
    }
    else{
        return ls(arr,n,k,i+1);
    }
    // return ans;
}
int main()
{
    int arr[5]={1,2,3,4,6};
    cout<<"ans="<<ls(arr,5,8);
    return 0;
}