#include<iostream>
using namespace std;
int max(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]<arr[mid]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;
}
int main()
{
    int arr[5]={9,11,10,5,2};
    cout<<max(arr,5);
    return 0;
}