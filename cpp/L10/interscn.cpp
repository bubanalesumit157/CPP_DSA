#include<iostream>
using namespace std;
void interscn(int arr1[],int n1,int arr2[],int n){
    int inter[5]={0};
    int l=0;
    for(int i=0;i<6;i++){
        for(int j=i;j<5;j++){
            if(arr1[i]==arr2[j]){
                inter[l]=arr1[i];
                l++;
                break;
            }
        }
    }
    for(int i=0;i<5;i++ )
    {
        cout<<inter[i]<<" ";
    }
}
int main()
{
    int arr1[6]={3,4,4,5,5,5};
    int arr2[5]={3,3,4,5,5};
    interscn(arr1,6,arr2,5);
    return 0;
}