#include<iostream>
using namespace std;

void merge_arr(int arr[],int s,int e){
    int mid=(s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *a1= new int[l1];
    int *a2= new int[l2];
    int k1=s;
    for(int p=0;p<l1;p++){
        a1[p]=arr[k1++];
    }
    int k2=mid+1;
    for(int p=0;p<l2;p++){
        a2[p]=arr[k2++];
    }
    
    int i=0,j=0;
    int ni=s;
    while(i<l1 && j<l2 ){
        if(a1[i]<a2[j]){
            arr[ni++]=a1[i++];
        }
        else{
            arr[ni++]=a2[j++];
        }
    }
    while(i<l1){
        arr[ni++]=a1[i++];
    }
    while(j<l2){
        arr[ni++]=a2[j++];
    }
    // free(a1);
    // free(a2);
    delete []a1;
    delete []a2;

}

void merge_sort(int arr[],int s,int e){
    int mid=(s+e)/2;
    if(s>=e){
        return;
    }
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    merge_arr(arr,s,e);
}

int main()
{
    int arr[14]={100,9,5,10,8,9,0,6,77,9,96,97,97,9};
    int n=14;
    merge_sort(arr,0,n-1);
    for(int p=0;p<n;p++){
        cout<<arr[p]<<" ";
    }

    return 0;
}