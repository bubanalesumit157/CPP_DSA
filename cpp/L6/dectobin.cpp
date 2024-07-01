#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   
    unsigned long int ans=0,n=10,c=0;
    while(n>0){
        int rem=(n&1);
        n=n>>1;
        ans=(rem*pow(10,c))+ans;
        c++;

    }
    cout<<ans;
    return 0;
}