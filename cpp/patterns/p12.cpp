#include<iostream>
using namespace std;

int main()
{
    int n=4;
    char ch='a';
   
    for (int i = 0; i < n; i++)
    {
        int c=3;
        for (int j = 0; j <=i; j++)
        {
            char chh=ch+c-i;
            cout<<chh<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}