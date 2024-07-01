#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int x=9971;
    int rev=0;
    while(x>0){
        int rem=x%10;
        if((rev>INT_MAX/10)|(rev<INT_MIN/10)){
            rev=0;
            break;
        }
        rev=rev*10+rem;
        x=x/10;
    }
    cout<<rev;
    return 0;
}