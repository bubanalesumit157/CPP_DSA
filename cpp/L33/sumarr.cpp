#include<iostream>
using namespace std;
int sum(int arr[],int n,int i=0){
    if(n==0){
        return 0;
    }
    if(i==n-1){
        return arr[i];
    }
    return arr[i]+sum(arr,n,i+1);
}

int main()
{
    int arr[2]={1,2};
    cout<<endl<<"ans="<<sum(arr,0);
    return 0;
}