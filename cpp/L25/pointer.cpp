#include<iostream>
using namespace std;

int main()
{
    int n1=3,n=600;
    cout<<n<<endl;
    cout<<&n1<<endl<<&n<<endl<<endl;
    int *ptr=&n;
    cout<<*ptr<<endl;
    cout<<sizeof(ptr)<<endl;

    // ptr to int created,it points to garbage value 
    // int *p1=0;
    // cout<<"P"<<*p1<<endl;

    // initialize ptr to null then assigm=n address
    // int j=8;
    // int *p=0;
    // p=&j;
    // cout<<p<<endl<<*p;

    // increment 
    int l=5;
    int *pt= &l;
    int a=*pt;
    a++;
    cout<<*pt<<endl;
    
    (*pt)++;
    cout<<*pt<<endl;

    // copying pointer
    int *cp=pt;
    cout<<*cp<<endl;
    
    // arithmetic on ptr
    int k=8;
    int *t=&k;
    // *t=*t+2;
    cout<<t<<endl;
    t=t+1;
    cout<<t<<endl;
    return 0;
}