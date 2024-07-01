#include<iostream>
using namespace std;
bool ifpos(int arr[],int n,int k,int mid){
    int cc=1;
    int lastpos=arr[0];
    for(int i=0;i<n;i++){
        if((arr[i]-lastpos)>=mid){
            cc++;
            if(cc==k){
                return true;
            }
            lastpos=arr[i];
        }
    }
    return false;
    
}
int aggcows(int arr[],int n,int k,int min,int max){

    int s=0;

    int e=max;
    int ans=0;

    int mid=s+(e-s)/2;
    while(s<=e){
        if(ifpos(arr,n,k,mid)){
            ans=mid;
            s=mid+1;
            // cout<<"y"<<mid<<endl;
        }
        else{
            // cout<<"D"<<endl<<endl;
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[6]={0,3,4,7,9,10};
    int k=4;
    cout<<"ans="<<aggcows(arr,6,4,0,10);

    return 0;
}