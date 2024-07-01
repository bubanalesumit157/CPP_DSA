#include<iostream>
#include<math.h>
using namespace std;
bool powerof2usingbits(){
    int n=3232;
    int c=0;
    while(n!=0){
        int bit=n&1;
        if(bit==1){
            c++;
            if(c>1)break;
        }
        n=n>>1;
    }
    if(c==1){
        return true;
    }
    return false;
}
bool powoftw0_lb1(){
    int n=32;
    for(int i=0;i<31;i++){
        int ans=pow(2,i);
        if(ans==n){
            return true;
        }
    }
    return false;
}
bool powoftw0_lb(){
    int n=32;
    int ans=1;
    for(int i=0;i<31;i++){
        ans=ans*2;
        if(ans==n){
            return true;
        }

    }
    return false;
}
int main()
{
    cout<<"result using bits "<<powerof2usingbits()<<endl;
    int n=32,p=0,i=0,f=0;

        if(n==0){
            f=0;
        }
        else{
            while(n>=p){
                if(n==p){
                    f=1;
                    break;
                }
                if(i>=31)break;
                p=pow(2,i);
                i++;
            }
        }
        
        if(f==0){
            // cout<<true;
        }
        else{
            // cout<<false; ;
        }
    return 0;
}