#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={2,34,6,7,8};
    int n=arr.size(),m=3;
    int d=n-m;
    for(int i=0;i<d/2;i++){
        swap(arr[i+m],arr[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}