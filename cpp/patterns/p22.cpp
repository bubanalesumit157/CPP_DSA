#include<iostream>
using namespace std;

int main()
{
    // dabangg pattern
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*"<<" ";
        }
        for(int c=0;c<i;c++){
            cout<<"*"<<" ";
        }
        int s=n-i;
        for(int l=0;l<n-i;l++){
            cout<<s<<" ";
            s--;
        }
        cout<<endl;
    }
    return 0;
}