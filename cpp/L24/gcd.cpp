#include<iostream>
using namespace std;
int gcd(int s,int b){
    for(int i=s;i>=0;i--){
        if(s%i==0 && b%i==0){
            return i;
        }
    }
    return b;
}

int gcdlb(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int lcm(int a,int b){
    int gcdd=gcd(a,b);
    // lcm*gcd = a*b ;
    int lcmm=a*b/gcdd;
    return lcmm;
}
int main()
{
    int a=3,b=6;
    cout<<lcm(a,b);
    
    return 0;
}