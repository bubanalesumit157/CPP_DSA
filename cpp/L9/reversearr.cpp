#include<iostream>
using namespace std;
void swaparrfor(int arr[],int n ){
    for(int i=0;i<n/2;i++){
        int t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
}
void swaparr(int arr[],int n)
{
    int s=0;
    int end=n-1;
    while(s<end)
    {
        swap(arr[s],arr[s+2]);
        s++;
        end--;

    }
}

void altswaparr(int arr[],int n)
{
    for(int i=0;i<n;i+=2){
        int t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
    }
}
void altswaparrwhile(int arr[],int n){
    int i=0;
    while(i<n)
    {
        swap(arr[i],arr[i+1]);
        i+=2;
    }
}

int main()
{
    int arr[6]={3,4,5,6,7,5};
    int n=6;
    altswaparrwhile(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}