#include<iostream>
using namespace std;
void  fn(int **p2){
    
    // p2=p2+1;
    // this works- NO here the addres of p changes tempporarily

    // *p2=*p2+1;
    // this works- YES here address of i increase by 4

    // **p2=**p2+1;
    // this works- YES here value of i increase by 1
}
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<"before"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl<<endl;
    fn(p2);
    cout<<"after fn call"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    return 0;
}