#include<iostream>
using namespace std;

int main()
{
    
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for(int k=0;k<=i;k++){
            cout<<k+1<<" ";
        }
        int s=i;
        for(int c=0;c<i;c++){
            cout<<s<<" ";
            s--;
        }
        cout<<endl;
    }
    return 0;
}