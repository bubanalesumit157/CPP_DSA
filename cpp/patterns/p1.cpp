#include<iostream>
using namespace std;

int main()
{   
    int r=3,c=3;
    /*
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    */
    int i=0;
    while(i<r){
        int j=0;
        while(j<c){
            cout<<c-j;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

