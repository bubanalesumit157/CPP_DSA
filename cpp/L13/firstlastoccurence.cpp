#include<iostream>
using namespace std;
int first_occur(int arr[],int n,int key){
     int s=0,e=n-1;
     int mid=s+(e-s)/2;
     int ans=0;
     while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int last_occur(int arr[],int n,int key){
     int s=0,e=n-1;
     int mid=s+(e-s)/2;
     int ans=0;
     while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
} 
int total_no_of_occur(int arr[],int n,int key){
    int l=last_occur(arr,n,key);
    int f=first_occur(arr,n,key);
    int ans=l-f+1;
    return ans;
}
int main()
{
    int arr[4]={4,4,4,77};
    cout<<first_occur(arr,4,4)<<endl;
    cout<<last_occur(arr,4,4)<<endl;
    cout<<total_no_of_occur(arr,4,4);
    return 0;
}