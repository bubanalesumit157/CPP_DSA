#include<iostream>
using namespace std;
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int s=arr[0]+sum(arr+1,n-1);
    return s;
}
int main()
{
    int arr[4]={1,4,5,6};
    cout<<sum(arr,4);
    return 0;
}