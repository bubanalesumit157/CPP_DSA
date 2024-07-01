#include<iostream>
using namespace std;

bool sort(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return sort(arr+1,n-1);
    }

}
int main()
{
    int arr[4]={3,4,6,7};
    cout<<sort(arr,4);
    return 0;
}