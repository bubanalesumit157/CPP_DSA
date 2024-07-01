#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={7,0,6,0,7,2,0,1};
    int n=arr.size();
    int k=n;
    for(int i=1;i<n;i++){
        if(arr[i]>0){
            for(int j=i;j>=0;j--){
                if(arr[j-1]==0){
                    swap(arr[j],arr[j-1]);
                }
                else{
                    break;
                }
            }
            for(int l:arr){
                cout<<l<< " ";
            }
            cout<<endl;
        }
    }
    cout<<"ans= ";
    for(int i:arr){
        cout<<i<< " , ";
    }
    return 0;
}