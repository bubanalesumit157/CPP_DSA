#include<iostream>
using namespace std;

int main()
{
    int r;
    cin>>r;
    int c=0;
    // cin>>c;

    // creating 2d arry dynamically
    int col[r]={0};
    int **arr=new int *[r];
    for(int i=0;i<r;i++){
        
        cout<<"enter ool";
        cin>>c;
        arr[i]=new int[col[i]];
        if(col[i]>c){
            c=col[i];
        }
    }    
    for(int i=0;i<r;i++){
        for(int j=0;j<col[i];j++){
            cin>>arr[i][j];
        }
    }    
    for(int i=0;i<r;i++){
        for(int j=0;j<col[i];j++){
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