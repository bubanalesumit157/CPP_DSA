#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n=5,mask=0,i=0;
    int pa=(~n);
    do{
        mask=(mask<<1)|1;
        n=n>>1;
    }while(n!=0);
    int ans=(pa&mask);
    cout<<ans;

}