#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cin>>r;
    cin>>c;

    // creating 2d arry dynamically
    int **arr=new int *[r];
    for(int i=0;i<r;i++){
        arr[i]=new int[c];
    }    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    

    // releasing arr. For this release elements 1st then ptrs in heap
    for(int i=0;i<r;i++){
        delete []arr[i];
    } 
    delete []arr;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    
    return 0;
}