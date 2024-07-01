#include<iostream>
using namespace std;
void sort(int arr[],int n){
    if(n==1){
        return;
    }
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);

        }
    }
    
    
    sort(arr,n-1);

}
int main()
{
    int arr[6]={1,43,2,4,0,10};
    sort(arr,6);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}