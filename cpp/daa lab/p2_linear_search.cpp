#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int arr[1000];
    int key=99;
    int l=1,u=1000;
    clock_t start = clock();
    srand(time(NULL));
    for(int i=0;i<1000;i++){
        int num = rand()%u+l;
        arr[i]=num;
        cout<<num<<" ";
    }

    // int key=77;
    int pos=-1;
    for(int i=0;i<1000;i++){
        if(arr[i]==key){
            pos=i;
        }
    }
    if(pos==-1){
        cout<<endl<<"not exist"<<endl;
    }
    else{
        cout<<endl<<"ele at "<<pos<<endl;
    }

    clock_t end=clock();
    cout<<"time taken: "<<(double)(end-start)/CLOCKS_PER_SEC;

    return 0;
}