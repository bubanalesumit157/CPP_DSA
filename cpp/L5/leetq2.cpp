#include<iostream>
using namespace std;

int main()
{

        int n=31, c=0;
        while(n>0){
            if(n&1){
                c++;
            }
            n=n>>1;
        }
        cout<<c<<"no of set bits ";
    

    return 0;
}