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

double dec_pts_lb(int n,int dc){
    double ans=sqrt(n);
    // double ans=0;
    double f=1;
    int l=0;
    for(int i=0;i<dc;i++){
        f=f/10;
        for(double j=ans;j*j<n;j=ans+f){
            ans=j;
            l++;
        }
    }
    cout<<ans<<endl<<l<<endl;
    return ans;
}

double dec_pts(int n,int dc){
    int sq=sqrt(n);
    double ans=sq;
    double anss=0;
    // int ss=0;
    double pr=0,s=1,e=10,c=1;
    for(int i=0;i<dc;i++){
        s=s/10;
        c=c/10;
        e=e/10;
        
        
        for(double k=s;k<e;k=k+c){
            double pr=ans+k;
            double p=pr*pr;
            if(p<n){
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
    int n=24,dc=2;   
    cout<<"anns"<<fixed<<setprecision(dc)<<dec_pts_lb(n,dc);
    return 0;
}