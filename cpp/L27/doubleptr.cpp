#include<iostream>
using namespace std;

int main()
{ 
    int i=9;
    int*p = &i;
    int **p2=&p;
    int ***p3=&p2;
    cout<<&i<<" "<<p<<" "<<*p2<<" "<<**p3<<endl;
    cout<<&p<<" "<<p2<<" "<<*p3<<endl;
    cout<<&p2<<" "<<p3<<endl;
    cout<<i<<" "<<*p<<" "<<**p2<<" "<<***p3<<endl;
    
 
    return 0;
}