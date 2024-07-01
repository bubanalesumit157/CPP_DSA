#include<iostream>
using namespace std;
void duplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];

    }
    cout<<ans<<endl;
    for(int j=0;j<n;j++){
        ans=ans^j;
    }
    cout<<ans;
}
int main()
{
    int arr[5]={3,4,5,6,3};
    duplicate(arr,5);
    return 0;
}