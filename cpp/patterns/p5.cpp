#include<iostream>
using namespace std;

int main()
{
    int c=4,r=4;
    for(int i=1;i<=r;i++){
        int t=i;
        for(int j=1;j<=i;j++){
            cout<<t<<" ";
            t++;
        }
        cout<<endl;
    }
    return 0;
}