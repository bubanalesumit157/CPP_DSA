#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={0,0,1};
    int n=arr.size();
    int k=n;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i;j<k-1;j++){
                swap(arr[j],arr[j+1]);
            }
            for(int l:arr){
                cout<<l<< " ";
            }
            cout<<endl;
            
            k--;
        }
    }
    for(int i:arr){
        cout<<i<< " ";
    }
    return 0;
}