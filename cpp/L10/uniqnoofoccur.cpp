#include<iostream>
using namespace std;


void uniq(int arr[],int n){
    int ans=0;
    int i=0;
    while(i<n){
        ans=ans^arr[i];
        i++;
    }
    if(ans=0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
int main()
{
    int arr[5]={4,3,5,34,44};
    uniq(arr,5);
    return 0;
}
 