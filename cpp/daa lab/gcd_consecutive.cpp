#include<iostream>
using namespace std;
int gcd_con(int m,int n){
    int s=min(m,n);
    while(s>0){
        int mr = m%s;
        int nr = n%s;
        cout<<mr<<" "<<nr;
        if(mr==0 && nr==0){
            return s;
        }
        else{
            s--;
        }
    }
    return 1;
}
int main()
{
    int m=6,n=0;
    cout<<gcd_con(m,n);
    return 0;
}