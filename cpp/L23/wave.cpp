#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int r=3,c=4;
    vector<int> v;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            if(i%2==0){
                v.push_back(arr[j][i]);
            }
            else{
                v.push_back(arr[r-j-1][i]);
            }
        }
    }
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}