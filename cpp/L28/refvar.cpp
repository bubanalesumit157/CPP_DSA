#include<iostream>
using namespace std;
void update(int n){
    n++;
}
void update1(int & n){
    n++;
}

int& funcref(int n){
    int &b=n;
    b++;
    return b;
}

int* func(int n){
    int *b=&n;
    cout<<b<<" "<<*b<<endl;
    ++(*b);
    cout<<b<<" "<<*b<<endl;
    return b;

}
int main()
{
    // int i=9;
    // int &j=i;
    // cout<<i<<" "<<j<<endl;
    // i++;
    // cout<<i<<" "<<j<<endl;
    // j++;
    // cout<<i<<" "<<j<<endl;
    // cout<<&j<<" "<<&i<<endl;
    int n=5;
    // update(n);
    // cout<<"pass by value-"<<n<<endl;
    // update1(n);
    // cout<<"pass by reference- "<<n<<endl;

    // int &a=funcref(n);
    // cout<<a;

    int *a=&n;
    cout<<a<<" "<<n<<" "<<&n<<endl;
    a=func(n);
    cout<<a<<" "<<*a<<" "<<n;
    return 0;
}