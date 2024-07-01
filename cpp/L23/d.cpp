#include<iostream>
using namespace std;

int main()
{
    int a[7]={5,1,15,20,25};
    int i,j,k;
    i=++a[1];
    cout<<i<<endl;
    j=a[1]++;
    cout<<j<<endl;
    k=a[i++];
    cout<<i<<j<<k;
    return 0;
}