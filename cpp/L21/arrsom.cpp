#include<iostream>
using namespace std;

int main()
{
    int arr1[1]={5};
    int arr2[3]= {9,2,2};
    int k,s;
    int m=sizeof(arr1)/sizeof(int);
    int n=sizeof(arr2)/sizeof(int);
    

    k=((m>n)?m:n)+1;
    s=(m<n)?m:n;
    int ans[k]={0};
    int carry=0;

    for(int i=0;i<s;i++){
        int sum=arr1[m-i-1]+arr2[n-i-1];
        int d=sum%10;
        ans[k-i-1]=d+carry;
        carry=sum/10;
    }

    if(m>n){
        for(int i=s;i<k-1;i++){
            int sum=arr1[k-i-2]+carry;
            ans[k-i-1]=sum%10;
            carry=sum/10;
        }
    }
    
    else if(m<n){
        for(int i=s;i<k-1;i++){
            int sum=arr2[k-i-2]+carry;
            ans[k-i-1]=sum%10;
            carry=sum/10;
        }
    } 
    
    ans[0]=carry;
    cout<<"ans = ";
    for(int i=0;i<k;i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}