#include<iostream>
using namespace std;
void a(int arr[]){
    arr[2]=99;
}
int main()
{
    int arr[4]={5,67,8,40};
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    a(arr);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}