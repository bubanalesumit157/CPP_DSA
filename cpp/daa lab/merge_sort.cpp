#include<iostream>
using namespace std;

void merge(int arr[],int s,int mid,int e){
    int n1=mid-s+1;
    int n2=e-mid;

    int arr1[n1];
    int arr2[n2];

    int i1=s;
    int i2=mid+1;

    for(int i=0;i<n1;i++){
        arr1[i]=arr[s+i];
        i1++;
    }

    for(int i=0;i<n2;i++){
        arr2[i]=arr[mid+1+i];
        i2++;
    }
    int i=0,j=0;
    int k=s;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;
        }
        else{
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[],int s,int e){
    if(s<e){
        int mid=s+(e-s)/2;
        merge_sort(arr,s,mid);
        merge_sort(arr,mid+1,e);
        merge(arr,s,mid,e);
    }
}
int main()
{
    int arr[7]={3,6,10,8,4,2,10};
    merge_sort(arr,0,6);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}