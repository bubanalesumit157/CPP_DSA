#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    int j=4;
    int i,c=0;
    for(i=3;i>=0;i--){
        while(a[i]!=0){
            a[i]--;
            a[j]--;
            c++;
            if(a[j]==0 && a[i]!=0){
                j=i;
                i--;
            }
            
        }
    }
    cout<<c<<endl;

    return 0;
}