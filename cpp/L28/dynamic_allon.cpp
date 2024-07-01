#include<iostream>
using namespace std;
int getsum(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s=s+arr[i];
    }
    return s;
}
int main()
{
    char ch='m';
    cout<<sizeof(ch)<<endl;
    char *c=&ch;
    cout<<sizeof(c)<<endl;

    int *arr= new int[5];
    cout<<sizeof(arr)<<endl;

    int n;
    cin>>n;
    // variable size arr
    int *dynarr= new int[n];

    for(int i=0;i<n;i++){
        cin>>dynarr[i];
    }
    cout<<"arr=";
    for(int i=0;i<n;i++){
        cout<<dynarr[i];
    }
    cout<<endl<<getsum(dynarr,n);
    return 0;
}