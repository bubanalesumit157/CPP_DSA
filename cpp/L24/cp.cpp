#include<iostream>
using namespace std;
int cp(int n){
    int c;
    if(n<=2){
        return 0;
    }
    else if(n<=3){
        return 1;
    }
    else if(n<=5){
        return 2;
    }
    else if(n<=7){
        return 3;
    }
    else{
        c=4;
    }
    for(int i=8;i<n;i++){
        if(i%2==0 || i%3==0 || i%5==0 || i%7==0){
            // cout<<i<<endl;
        }
        else{
            c++;
        }
    }
    return c;
}
int main()
{
    int n=10000;
    cout<<cp(n);
    return 0;
}