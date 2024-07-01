#include<iostream>
using namespace std;
int bs(int arr[],int k,int s,int e){
    int mid=s+(e-s)/2;
    // int ans=-1;
    // cout<<1<<" "<<mid<<endl;
    if( s>e  ){
        return -1;
    }
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]<k){
        return bs(arr,k,mid+1,e);
    }
    else{
        return bs(arr,k,s,mid-1);
    }
    
    // return -1;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int k=0;
    cout<<bs(arr,k,0,4);
    return 0;
}