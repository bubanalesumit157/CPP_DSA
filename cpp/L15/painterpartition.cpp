#include<iostream>
using namespace std;
bool ifpos(int arr[],int k,int mid,int n){
    int pc=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==mid){
            pc++;
            sum=0; 
        }
        else if(sum>mid){
            sum=arr[i];
            pc++;
        }
    }
    if(pc==k){
        return true;
    }
    else{
        return false;
    }
}
int pp(int arr[],int n, int k)
{
    int s=0,ans=0;int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum-1;
    int mid=s+(e-s)/2;
    cout<<mid<<endl;
    while(s<e){
        if(ifpos(arr,k,mid,n)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        cout<<mid<<endl;
    }
    return ans;
    //    Write your code here.
}
int main()
{
    int arr[6]={2,2,3,3,7,7};
    int k=3;
    cout<<"ans"<<pp(arr,6,k);
    return 0;
}