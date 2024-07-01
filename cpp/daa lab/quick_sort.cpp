#include<iostream>
#include<vector>
using namespace std;
int partition_start(int arr[],int s,int e){         
    int pivot = arr[s];
    int i=s;
    int j=e;
    while(i<=j){
        while(arr[i]<=pivot && i<=e){
            i++;
        }
        while(arr[j] >= pivot && j>=s+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]); 
        }
    }
    swap(arr[s],arr[j]);
    return j;
}


int partition_end(int arr[],int s,int e){          
    int pivot = arr[e];
    int i=s;
    int j=e-1;
    while(i<=j){
        while(arr[i]<=pivot && i<=e-1){
            i++;
        }
        while(arr[j] >= pivot && j>=s){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]); 
        }
    }
    cout<<endl<<i<<" "<<j<<endl<<"arr:";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    swap(arr[e],arr[i]);
    return i;
}

void quick_sort(int arr[],int s,int e){
    if(s<e){
        int p=partition_end(arr,s,e);
        quick_sort(arr,s,p-1);
        quick_sort(arr,p+1,e);
    }
    return;
}


int main()
{
    int arr[10]={49,99,8,5,7,9,1,0,2,3};
    // cout<<arr[1];
    quick_sort(arr,0,9);
    cout<<"sorted order:";
    for(auto i:arr){
        cout<<i<<" ";
    }
    
    return 0;
}