#include<iostream>
using namespace std;
int pivot1(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid] >=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int search(int arr[],int n,int key){
    int p=pivot1(arr,n);
    cout<<"P="<<p<<endl;
    int s=0,e=0;
    if(key>arr[n-1]){
        s=0;
        e=p-1;
    }
    else{
        s=p;
        e=n-1;
    }
    cout<<s<<" "<<e<<endl;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
}
int main()
{
    int arr[6]={4,5,7,1,2,3};
    cout<<search(arr,6,7);
    return 0;
}