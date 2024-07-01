#include<iostream>
using namespace std;
void rs(int arr[][3],int r,int c){
    int sum[r]={0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i]+=arr[i][j];
        }
        cout<<"sum["<<i<<"]="<<sum[i]<<endl;
    }
}
void largestrs(int arr[][3],int r,int c){
    int sum[r]={0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i]+=arr[i][j];
        }
        cout<<"sum["<<i<<"]="<<sum[i]<<endl;
    }
    int maxi=0,ind=0;
    for(int i=0;i<3;i++){
        if(sum[i]>maxi){
            maxi=sum[i];
            ind=i;

        }
    }
    cout<<"max="<<maxi<<" at index= "<<ind<<endl;
}
void cs(int arr[][3],int r,int c){
    int sum[c]={0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i]+=arr[j][i];
        }
        cout<<"sum["<<i<<"]="<<sum[i]<<endl;
    }
}
int main()
{
    int arr[3][3]={1,1,1,2,2,2,3,3,3};
    largestrs(arr,3,3);
    cs(arr,3,3);
    return 0;
}