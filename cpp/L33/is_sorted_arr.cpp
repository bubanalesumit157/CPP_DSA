#include<iostream>
using namespace std;
bool sort(int arr[],int n,int i=0){

    
    if(i>=n-1){
        return true;
    }
    
    bool ans=true;
    if(arr[i]<=arr[i+1]){
        ans= true;
    }
    else if(arr[i]>arr[i+1]){
        return  false;
    }
    // cout<<i<<endl;
    ans=ans&&sort(arr,n,i+1);
    return ans;
}
int main()
{
    int arr[5]={1,2,4,9,4};
    // int arr[1]={1};
    cout<<sort(arr,5);
    return 0;
}