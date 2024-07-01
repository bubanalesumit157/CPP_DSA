#include<iostream>
using namespace std;

int main()
{
    int arr[4]={2,3,4,5};
    char ch[6]="adss";
    cout<<arr[0];
    cout<<ch<<endl;

    char *c=&ch[3];
    cout<<c<<endl;

    char t='p';
    char *ck=&t;
    cout<<ck<<" "<<endl;

    char *v="ads";
    cout<<v<<endl;
    return 0;
}