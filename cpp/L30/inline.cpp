#include<iostream>
using namespace std;
inline  int getmax(int& a,int& b){
    return (a>b)?a:b;
}
int main()
{
    int a=3,b=4;
    cout<<getmax(a,b);
    return 0;
}