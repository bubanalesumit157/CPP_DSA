#include<iostream>
using namespace std;

int print(int n){
    if(n==1){
        return 1;
    }
    
    print(n-1);
    cout<<n<<" ";
    
}

void printlb(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";

    printlb(n-1);

    cout<<n<<" ";
}


int main()
{
    int n=5;
    printlb(n);
    return 0;
}