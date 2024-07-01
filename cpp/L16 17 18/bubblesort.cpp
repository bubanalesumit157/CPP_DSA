#include<iostream>
using namespace std;

int main()
{
    int arr[7]={ 8, 22, 7, 9, 31, 5, 13};
    int n=7,c=0;
    for(int i=0;i<n;i++){
        bool swap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                c++;
            }
        }
        if(swap==false){
            break;
        }
    }
    cout<<c<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}