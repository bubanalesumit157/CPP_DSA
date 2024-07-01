#include<iostream>
using namespace std;
// void wrong_arg(int a[],int n=0,int s)  //this is wrong.order from right
   
void p(int a[],int n=0,int s){
    for(int i=s;i<n;i++){
        cout<<a[i];
    }
}
int main()
{
    int arr[3]={1,2,3};
    p(arr,3);
    return 0;
}