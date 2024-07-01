#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int sqrt(int n){
    int s=1,e=n-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        int p=mid*mid;
        if(p==n){
            return mid;
        }
        else if(p>n){
            e=mid-1;
        }
        else{
            s=mid+1;
            ans=mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}



float dec_pts(int n,int dc){
    int sq=sqrt(n);
    // cout<<sq<<endl;
    // float i=0.1;
    // float s=0,e=1;
    // float mid=s+(e-s)/2;
    // cout<<mid<<endl;
    float ans=sq;
    float anss=0;
    // int ss=0;
    float pr=0,s=1,e=10,c=0;
    for(int i=1,j=0;i<=dc;i++,j++){
        s=s/10;
        c=s;
        e=e/10;
        
        
        for(int k=s;k<e;k=k+c){
            float pr=ans+k;
            // cout<<pr<<endl;
            float p=pr*pr;
            if(p==n){
                return pr;
            }
            else if(p<n){
                anss=k;
            }
            else{
                break;
            }
        }
        ans=ans+anss;
    }
    return ans;
    
}
int main()
{
    int n=30,dc=2;   
    cout<<"anns"<<dec_pts(n,dc);
    return 0;
}