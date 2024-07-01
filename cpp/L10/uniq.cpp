#include<iostream>
using namespace std;
void uniq(int arr[],int n){
    int ans=0;
    int i=0;
    while(i<n){
        ans=ans^arr[i];
        i++;
    }
    cout<<ans;
}
int main()
{
    int arr[5]={4,4,5,3,3};
    uniq(arr,5);
    return 0;
}