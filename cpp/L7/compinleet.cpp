#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n=5,b=0,nb,ans=0,i=0;
        if(n==0){
            ans= 1;
        }
        else{
            while(n!=0){
            b=n&1;
            if(b==1){
                nb=0;
            }
            else{
                nb=1;
            }
                ans=ans+nb*pow(2,i);
                n=n/2;
                i++;
            }
        }
    cout<<ans;
    return 0;
}