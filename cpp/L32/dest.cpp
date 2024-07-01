#include<iostream>
using namespace std;
void reachdest(int src,int dest){
    if(src==dest){
        cout<<"reached"<<endl;
        return;
    }
    src++;
    reachdest(src,dest);
}
int main()
{
    int dest=5,src=1;
    reachdest(src,dest);
    return 0;
}