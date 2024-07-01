#include<iostream>
using namespace std;

int main()
{
    int n=3;
    char ch='a';
    for (int i = 0; i <n; i++)
    {
        int c=i;
        for (int j = 0; j < n; j++)
        {
            char chh=ch+c;
            cout<<chh<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}