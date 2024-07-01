#include<iostream>
using namespace std;

int main()
{
    int arr[4]={1,2,3,4};
    int k=1,n=4;
    int temp[4];
    // rotating array towards right
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}