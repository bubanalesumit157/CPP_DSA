#include<iostream>
#include<vector>    
using namespace std;

int main()
{
    vector<int> arr={2,3,4,4,0,4,5,0};
    int n=arr.size(),k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            arr[n-k-1]=0;
            k++;
        }
    }
    cout<<"ans= ";
    for(int i:arr){
        cout<<i<<" ";
    }
    
    return 0;
}