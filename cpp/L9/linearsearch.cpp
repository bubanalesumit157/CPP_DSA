#include<iostream>
using namespace std;

int main()
{
    int arr[5]={44,45,5,6,7};
    int key=7,f=0;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            f=i+1;
        }
    }
    if(f==0)
    {
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"key found at "<<f<<"th pos";
    }
    return 0;
}