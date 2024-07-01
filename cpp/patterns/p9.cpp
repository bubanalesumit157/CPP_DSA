#include<iostream>
using namespace std;

int main()
{
    int n=3;
    char ch='a';
    int rc=0;
    for (int i = 0; i <n; i++)
    {
        int c=rc;
        for (int j = 0; j < n; j++)
        {
            char chh=ch+c;
            cout<<chh<<" ";
            c++;
        }
        cout<<endl;
        rc+=2;
    }
    return 0;
}