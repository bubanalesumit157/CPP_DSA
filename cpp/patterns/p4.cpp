#include<iostream>
using namespace std;

int main()
{
    int r=4,c=4,count=1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}