#include<iostream>
#include<limits.h>
using namespace std;
void min(int arr[],int n){
    int mini=arr[0];
    for(int i=0;i<n;i++){
        int mini=min(mini,arr[i]);
        if(arr[i]<mini)
        {
            // minim=arr[i];
        }
    }
    cout<<mini<<endl;

}
void max(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max<<endl;

}

int main()
{
    int arr[4]={1,44,5,6};
    for(int i=0;i<4;i++){
        cout<<arr[i];
    }
    cout<<endl;
    min(arr,4);
    max(arr,4);
    return 0;
}