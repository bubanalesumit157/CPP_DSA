#include<iostream>
using namespace std;

int main()
{
//     int a=4;
//     int *p=&a;
//     int *q=p; //this is coping an address/ptr into anoter ptr
//     (*q)++;
//     cout<<*q;

    // int f=3;
    // int *p=&f;
    // cout<<(*p)++;
    // cout<<f;

    // int *p=0;
    // int g=232;
    // *p=g; // this is segmentation error as & noy specified
    // cout<<*p;

    // int arr[5];
    // float *p;
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(p)<<endl;

    // int arr[4];
    // cout<<arr<<" "<<&arr<<" "<<&arr[0]<<endl;

    // int arr[4]= {3,4,5};
    // int*p=arr;
    // cout<<*(p+1);

    // int arr[4]={3,5,4};
    // int *p=arr++;
    // cout<<*p;

    // char ch='a';
    // char *p=&ch;
    // ch++;
    // cout<<*p<<" "<<p;

    // char ch[6]="dsfa";
    // char *p=&ch[0];
    // cout<<p<<endl;
    // p++;
    // cout<<p<<endl;

    int i=9;
    int *p=&i;
    int **q=&p;
    // int n=(**q)++ +10;
    int n1=i++ +10;
    // cout<<i<<" "<<n<<endl;
    cout<<i<<" "<<n1;
    return 0;
}