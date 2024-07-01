#include<iostream>
using namespace std;

int main()
{
    int arr[5]={5,3,6,7,2};
    for(int i=0;i<5;i++){
        int small=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[small]){
                small=j;
            }
        } 
        int t=arr[i];
        arr[i]=arr[small];
        arr[small]=t;  
    
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}