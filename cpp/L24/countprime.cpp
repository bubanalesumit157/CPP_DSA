#include<iostream>
using namespace std;
int cp(int n){
    
    if(n<2){
        return 0;
    }
    int c=1;
    for(int i=3;i<n;i=i+2){
        int f=0;
        for(int j=2;j<i/2;j++){
            if(i%j==0){
                f=1;
            }
            
        }

        if(f==0){
            c++;
            cout<<c<<endl;
        }
    }
    return c;
}
int main()
{
    int n=15;
    cout<<cp(n);
    return 0;
}