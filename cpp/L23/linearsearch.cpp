#include<iostream>
using namespace std;
void ls(int arr[][3], int r,int c,int key){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==key){
                cout<<i<<" "<<j<<" ";
            }
        }
    }
}
int main()
{
    int arr[3][3]={2,4,4,56,7,4,8,8,9};
    ls(arr,3,3,9);

    return 0;
}