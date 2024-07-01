#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n=101,ans=0,i=0;
    while(n>0){
        int digit=n%10;
        ans=ans+digit*pow(2,i);
        i++;
        n=n/10;

    }
    cout<<ans;
    return 0;
}