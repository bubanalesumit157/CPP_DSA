#include<iostream>
using namespace std;

void saydigit(int n){
    if(n==0){
        return;
    }
    int d=n%10;
    n=n/10; 
    saydigit(n);
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<arr[d]<<"  ";
}
int main()
{
    int n=348971;
    cout<<n<<endl;
    saydigit(n);
    return 0;
}