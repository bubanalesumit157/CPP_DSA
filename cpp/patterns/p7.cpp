#include<iostream>
using namespace std;

int main()
{
    int r=3,c=3;
    char ch='a';
    for (int i = 0; i < r; i++){
        char chy='a';
        for (int j = 0; j< c; j++){
            char charr=int(chy)+j;
            cout<<charr<<" ";
        }
        cout<<endl;
    }

    int k=0;
    while(k<r){
        int l=0;
        while(l<c){
            char cy=ch+k;
            cout<<cy<<" ";
            l++;
        }
        cout<<endl;
        k++;
    }
    
    return 0;
}