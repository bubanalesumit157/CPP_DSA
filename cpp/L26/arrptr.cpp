#include<iostream>
using namespace std;

int main()
{
    int arr[4]={0,5,2,3};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<*arr<<endl<<endl;

    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;
    cout<<arr[1]<<endl;
    cout<<*(arr+1)<<endl<<endl;

    cout<<arr+2<<endl;
    cout<<&arr[2]<<endl;
    cout<<arr[2]<<endl;
    cout<<*arr+2<<endl<<endl;

    cout<<++(*arr)<<endl;

    int i=2;
    cout<<arr[i]<<" "<<i[arr]<<endl<<endl;

    int *p=&arr[0];
    cout<<p<<" "<<*(p+1)<<endl;
    cout<<sizeof(&p)<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<sizeof(arr)<<" "<<sizeof(&arr)<<endl;
    cout<<sizeof(&arr[0])<<endl;

    cout<<&p<<endl;
    cout<<&arr[0]<<" "<<p<<endl<<endl;
 
    // arr=arr+1; -error coz we cant change the base address once allocated
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+2;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    return 0;
}